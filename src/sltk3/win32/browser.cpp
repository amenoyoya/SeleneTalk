#include "browser.h"

// AtlModuleInitClassを使うためのおまじない
CComModule _Module;
BEGIN_OBJECT_MAP(ObjectMap)
END_OBJECT_MAP()

namespace Sltk{
	namespace Win32{
		/*** class HTMLElement ***/
		Variant HTMLElement::getAttribute(const string &attr){
			if(!element) return Variant(VT_ERROR);
			
			BSTR p = SysAllocString(Encoding::utf8ToWideString(attr).c_str());
			VARIANT buf;
			HRESULT hr = element->getAttribute(p, 0, &buf);
			
			SysFreeString(p);
			if(FAILED(hr)) return Variant(VT_ERROR);
			else if(buf.vt == VT_BSTR) return Variant(VT_STRING, Encoding::toUTF8(buf.bstrVal? buf.bstrVal: L""));
			else if(buf.vt == VT_I4) return Variant(VT_INTEGER, "", buf.intVal);
			else if(buf.vt == VT_R8) return Variant(VT_NUMBER, "", 0, buf.dblVal);
			else return Variant();
		}
		
		bool HTMLElement::removeAttribute(const string &attr){
			if(!element) return false;
			
			BSTR p = SysAllocString(Encoding::utf8ToWideString(attr).c_str());
			VARIANT_BOOL success;
			bool ret;
			
			ret = SUCCEEDED(element->removeAttribute(p, 0, &success)) && success == VARIANT_TRUE;
			SysFreeString(p);
			return ret;
		}
		
		bool HTMLElement::setAttribute(const string &attr, const Variant &val){
			if(!element) return false;
			
			BSTR pAttr = SysAllocString(Encoding::utf8ToWideString(attr).c_str()), pValue = nullptr;
			VARIANT var;
			bool ret;
			
			switch(val.vType){
			case VT_STRING:
				var.vt = VT_BSTR;
				var.bstrVal = pValue = SysAllocString(Encoding::utf8ToWideString(val.strVal).c_str());
				break;
			case VT_INTEGER:
				var.vt = VT_I4;
				var.intVal = val.intVal;
				break;
			case VT_NUMBER:
				var.vt = VT_R8;
				var.dblVal = val.numVal;
				break;
			}
			ret = SUCCEEDED(element->setAttribute(pAttr, var, 0));
			SysFreeString(pAttr);
			if(pValue) SysFreeString(pValue);
			return ret;
		}
		
		#define HTMLElement_get_DEF(X, Y) string HTMLElement::get##X(){\
			if(!element) return "";\
			BSTR buf;\
			element->get_##Y(&buf);\
			return buf? Encoding::toUTF8(buf): "";\
		}
		#define HTMLElement_set_DEF(X, Y) bool HTMLElement::set##X(const string &str){\
			if(!element) return false;\
			BSTR p = SysAllocString(Encoding::utf8ToWideString(str).c_str());\
			bool ret = SUCCEEDED(element->put_##Y(p));\
			SysFreeString(p);\
			return ret;\
		}
		
		HTMLElement_get_DEF(Tag, tagName)
		HTMLElement_get_DEF(Class, className)
		HTMLElement_get_DEF(ID, id)
		HTMLElement_get_DEF(InnerHTML, innerHTML)
		HTMLElement_get_DEF(InnerText, innerText)
		
		HTMLElement_set_DEF(Class, className)
		HTMLElement_set_DEF(ID, id)
		HTMLElement_set_DEF(InnerHTML, innerHTML)
		HTMLElement_set_DEF(InnerText, innerText)
		
		#undef HTMLElement_get_DEF
		#undef HTMLElement_set_DEF
		
		
		/*** class HTMLElementCollection ***/
		HTMLElement HTMLElementCollection::operator[](u32 index){
			if(!collection) return nullptr;
			
			CComPtr<IHTMLElement> pElement;
			CComVariant  vintName(index);
			CComVariant  vintIndex(0);
			CComPtr<IDispatch>  pdsp2;
			
			return (SUCCEEDED(collection->item(vintName, vintIndex, &pdsp2)) && nullptr != (pElement = pdsp2))? pElement: nullptr;
		}
		
		HTMLElement HTMLElementCollection::getElement(const string &id){
			if(!collection) return nullptr;
			
			BSTR bstr = SysAllocString(Encoding::utf8ToWideString(id).c_str());
			CComVariant  bstrName;
			CComVariant  vintIndex(0);
			CComPtr<IDispatch>  pdsp2;
			CComQIPtr<IHTMLElement> pElement;
			HRESULT hr;
			
			bstrName.vt = VT_BSTR;
			bstrName.bstrVal = bstr;
			hr = collection->item(bstrName, vintIndex, &pdsp2);
			SysFreeString(bstr);
			if(SUCCEEDED(hr) && nullptr != (pElement = pdsp2)) return pElement;
			return nullptr;
		}
		
		
		/*** class Browser ***/
		u32 Browser::flag = 0;
		
		Browser::Browser(): hwnd(nullptr), event(nullptr), beforeNavigateFunction(nullptr),
			documentCompleteFunction(nullptr), newWindowFunction(nullptr)
		{
			GUID guid;
			
			if(flag == 0){
				++flag;
				_Module.Init(ObjectMap, GetModuleHandle(nullptr), &guid);
				AtlAxWinInit();
			}
		}
		
		Browser::Browser(u32 parent, s32 x, s32 y, u32 w, u32 h)
			: hwnd(nullptr), event(nullptr), beforeNavigateFunction(nullptr),
			documentCompleteFunction(nullptr), newWindowFunction(nullptr)
		{
			GUID guid;
			
			if(flag == 0){
				++flag;
				_Module.Init(ObjectMap, GetModuleHandle(nullptr), &guid);
				AtlAxWinInit();
			}
			open(parent, x, y, w, h);
		}
		
		bool Browser::open(u32 parent, s32 x, s32 y, u32 w, u32 h){
			CComPtr<IUnknown> unkown;
			
			close();
			if(nullptr == (hwnd = CreateWindowEx(0, L"AtlAxWin80", L"Shell.Explorer.2", WS_CHILD|WS_VISIBLE, x, y, w, h,
				(HWND)parent, 0, GetModuleHandle(nullptr), nullptr)))
			{
				_state = FAILED;
				_message = "failed create Browser 'AtlAxWin80'";
				return false;
			}
			
			if(AtlAxGetControl(hwnd, &unkown) != S_OK){
				_state = FAILED;
				_message = "failed to get ATL control";
				return false;
			}
			browser = unkown;
			if(!navigate("about:blank")){
				_state = FAILED;
				_message = "failed to navigate blank page";
				return false;
			}
			// イベントをDispatch
			if(FAILED(CComObject<BrowserEvent>::CreateInstance(&event))){
				_state = FAILED;
				_message = "failed to create browser instance";
				return false;
			}
			event->AddRef();
			if(!event->dispatch(this)){
				_state = FAILED;
				_message = "failed to dispatch browser event";
				return false;
			}
			
			requireDocumentInterface(); // HTML Documentインターフェイスを取得
			browser->put_RegisterAsDropTarget(VARIANT_FALSE); // デフォルトのファイルドロップイベントを無効化
			DragAcceptFiles(hwnd, TRUE); // WindowProcedure側でファイルドロップイベントを処理（親ウィンドウのprocedureで処理）
			_state = ACTIVE;
			return setSilent(true);
		}
		
		void Browser::close(){
			_state = NONE;
			_message.clear();
			if(pDoc2) pDoc2.Release();
			if(pDoc3) pDoc3.Release();
			if(pScript) pScript.Release();
			if(event){
				event->Release();
				event = nullptr;
			}
			if(browser) browser.Release();
			if(hwnd){
				DestroyWindow(hwnd);
				hwnd = nullptr;
			}
		}
		
		bool Browser::writeHTML(const string &html){
			if(!pDoc2) return false;
			
			CComQIPtr<IPersistStreamInit> psi = pDoc2;
			u32 size = html.size();
			// allocate memory
			HGLOBAL hMem = GlobalAlloc(GPTR, size);
			GlobalLock(hMem);
			CopyMemory(hMem, html.c_str(), size);
			// create stream
			IStream* stream = nullptr;
			if(FAILED(CreateStreamOnHGlobal(hMem, FALSE, &stream))){
				GlobalUnlock(hMem);
				GlobalFree(hMem);
				return false;
			}
			// load html string
			psi->Load(stream);
			stream->Release();
			GlobalUnlock(hMem);
			GlobalFree(hMem);
			return false;
		}
		
		void Browser::processKey(u32 hwnd, u32 msg, u32 wp, u32 lp){
			/*if(msg == WM_KEYDOWN && wp != VK_LEFT && wp != VK_RIGHT
				&& wp != VK_UP && wp != VK_DOWN && wp != VK_BACK)*/
			//{
				CComQIPtr<IOleInPlaceActiveObject, &IID_IOleInPlaceActiveObject> pIOIPAO(browser);
				
				if(pIOIPAO){
					MSG message = {(HWND)hwnd, (UINT)msg, (WPARAM)wp, (LPARAM)lp};
					pIOIPAO->TranslateAccelerator(&message);
				}
			//}
		}
		
		Variant Browser::executeScript(const string &funcName, s32 nArgs, Variant args[]){
			if(!pScript) return Variant(VT_ERROR);
			
			//Find dispid for given function in the object
			BSTR bstrMember = SysAllocString(Encoding::utf8ToWideString(funcName).c_str());
			DISPID dispid;
			HRESULT hr = pScript->GetIDsOfNames(IID_NULL, &bstrMember, 1, LOCALE_SYSTEM_DEFAULT, &dispid);
			
			SysFreeString(bstrMember);
			if(FAILED(hr)) return Variant(VT_ERROR, "failed to get ID of '"+funcName+"'");
			
			//Putting parameters  
			DISPPARAMS dispparams;
			
			memset(&dispparams, 0, sizeof dispparams);
			dispparams.cArgs      = nArgs;
			dispparams.rgvarg     = new VARIANT[dispparams.cArgs];
			dispparams.cNamedArgs = 0;
			for(s32 i = 0; i < nArgs; ++i){
				switch(args[i].vType){
				case VT_STRING:
					{
						CComBSTR bstr = Encoding::utf8ToWideString(args[nArgs - 1 - i].strVal).c_str(); // back reading
						
						bstr.CopyTo(&dispparams.rgvarg[i].bstrVal);
						dispparams.rgvarg[i].vt = VT_BSTR;
						break;
					}
				case VT_INTEGER:
					dispparams.rgvarg[i].intVal = args[nArgs - 1 - i].intVal;  // back reading
					dispparams.rgvarg[i].vt = VT_I4;
					break;
				case VT_NUMBER:
					dispparams.rgvarg[i].dblVal = args[nArgs - 1 - i].numVal;  // back reading
					dispparams.rgvarg[i].vt = VT_R8;
					break;
				}
			}
			
			//Call JavaScript function
			EXCEPINFO excepInfo;
			VARIANT vaResult;
			UINT nArgErr = (UINT)-1;  // initialize to invalid arg
			
			memset(&excepInfo, 0, sizeof(excepInfo));
			hr = pScript->Invoke(dispid, IID_NULL, 0, DISPATCH_METHOD, &dispparams, &vaResult, &excepInfo, &nArgErr);
			delete [] dispparams.rgvarg;
			if(FAILED(hr)) return Variant(VT_ERROR, "failed to execute javascript");
			else if(vaResult.vt == VT_BSTR) return Variant(VT_STRING, Encoding::toUTF8(vaResult.bstrVal? vaResult.bstrVal: L""));
			else if(vaResult.vt == VT_I4) return Variant(VT_INTEGER, "", vaResult.intVal);
			else if(vaResult.vt == VT_R8) return Variant(VT_NUMBER, "", 0, vaResult.dblVal);
			else return Variant();
		}
		
		HTMLElementCollection Browser::getElementsByTag(const string &tagName){
			if(!pDoc3) return nullptr;
			
			BSTR bstr = SysAllocString(Encoding::utf8ToWideString(tagName).c_str());
			CComPtr<IHTMLElementCollection> pCol;
			HRESULT hr = pDoc3->getElementsByTagName(bstr, &pCol);
			
			SysFreeString(bstr);
			if(SUCCEEDED(hr)) return pCol;
			return nullptr;
		}
		
		HTMLElementCollection Browser::getElementsByName(const string &name){
			if(!pDoc3) return nullptr;
			
			BSTR bstr = SysAllocString(Encoding::utf8ToWideString(name).c_str());
			CComPtr<IHTMLElementCollection> pCol;
			HRESULT hr = pDoc3->getElementsByName(bstr, &pCol);
			
			SysFreeString(bstr);
			if(SUCCEEDED(hr)) return pCol;
			return nullptr;
		}
		
		HTMLElement Browser::getElementByID(const string &id){
			if(!pDoc3) return nullptr;
			
			BSTR bstr = SysAllocString(Encoding::utf8ToWideString(id).c_str());
			CComQIPtr<IHTMLElement> pElement;
			HRESULT hr = pDoc3->getElementById(bstr, &pElement);
			
			SysFreeString(bstr);
			if(SUCCEEDED(hr)) return pElement;
			return nullptr;
		}
		
		bool Browser::executeCommand(const string &command, bool showUI, const Variant &value){
			if(!pDoc2) return false;
			
			BSTR cmd = SysAllocString(Encoding::utf8ToWideString(command).c_str());
			VARIANT_BOOL retVal;
			VARIANT inVal;
			
			switch(value.vType){
			case VT_STRING:
				{
					CComBSTR bstr = Encoding::utf8ToWideString(value.strVal).c_str();
					
					bstr.CopyTo(&inVal.bstrVal);
					inVal.vt = VT_BSTR;
					break;
				}
			case VT_INTEGER:
				inVal.intVal = value.intVal;
				inVal.vt = VT_I4;
				break;
			case VT_NUMBER:
				inVal.dblVal = value.numVal;
				inVal.vt = VT_R8;
				break;
			}
			HRESULT hr = pDoc2->execCommand(cmd, showUI, inVal, &retVal);
			
			SysFreeString(cmd);
			return SUCCEEDED(hr) && retVal;
		}
		
		void Browser::requireDocumentInterface(){
			CComPtr<IDispatch> pDisp;
			
			if(pDoc2) pDoc2.Release();
			if(pDoc3) pDoc3.Release();
			if(pScript) pScript.Release();
			// ドキュメント操作用インターフェイス取得
			if(FAILED(browser->get_Document(&pDisp))) return;
			if(FAILED(pDisp->QueryInterface(IID_IHTMLDocument2, (void**)&pDoc2))) return;
			if(FAILED(pDisp->QueryInterface(IID_IHTMLDocument3, (void**)&pDoc3))) return;
			// Javascriptインターフェイス取得
			pDoc2->get_Script(&pScript);
		}
	}
}
