#pragma once

/* IEコンポーネント */

#define _UNICODE

#include <atlbase.h>
extern CComModule _Module;  // AtlModuleInitClassを使うためのおまじない
#include <atlcom.h>
#include <atlhost.h>
#include <exdispid.h>
#include "window.h"

namespace Sltk{
	namespace Win32{
		/*** Variantデータ型 ***/
		enum VariantType{
			VT_NONE = 0, VT_STRING, VT_INTEGER, VT_NUMBER, VT_ERROR
		};
		
		struct Variant{
			u8 vType;
			string strVal;
			s32 intVal;
			double numVal;
			
			explicit Variant(u8 type=0, const string &str="", s32 ival=0, double nval=0.0)
				: vType(type), strVal(str), intVal(ival), numVal(nval) {}
		};
		
		
		/*** HTML要素クラス ***/
		class HTMLElement: public Object {
		public:
			HTMLElement(const CComPtr<IHTMLElement> &pElement): element(pElement) {}
			
			// 指定属性を取得
			Variant getAttribute(const string &attr);
			// 指定属性を削除
			bool removeAttribute(const string &attr);
			// 指定属性をセット
			bool setAttribute(const string &attr, const Variant &val);
			
			// クリックイベント発生
			bool click(){
				return element? SUCCEEDED(element->click()): false;
			}
			
			// <Tag>を取得
			string getTag();
			// <class>を取得
			string getClass();
			// <id>を取得
			string getID();
			// innerHTMLを取得
			string getInnerHTML();
			// innerTextを取得
			string getInnerText();
			
			// <class>を変更
			bool setClass(const string &name);
			// <id>を変更
			bool setID(const string &id);
			// innerHTMLを変更
			bool setInnerHTML(const string &html);
			// innerTextを変更
			bool setInnerText(const string &text);
		private:
			CComPtr<IHTMLElement> element;
		protected:
			virtual u8 _getState(){
				return element? ACTIVE: NONE;
			}
		};
		
		
		/*** HTML要素集合クラス ***/
		class HTMLElementCollection: public Object {
		public:
			HTMLElementCollection(const CComPtr<IHTMLElementCollection> &pCol): collection(pCol) {}
			
			// 要素数を取得
			u32 getSize() const{
				long lSize;
				return (collection && SUCCEEDED(collection->get_length(&lSize)))? lSize: 0;
			}
			
			// index番目の要素を取得
			HTMLElement operator [](u32 index);
			// 指定<id>の要素を取得
			HTMLElement getElement(const string &id);
		private:
			CComPtr<IHTMLElementCollection> collection;
		protected:
			virtual u8 _getState(){
				return collection? ACTIVE: NONE;
			}
		};
		
		
		/*** IEコンポーネントクラス ***/
		#define SINKID_SLIBBROWSER 0
		
		class Browser: public Object {
		public:
			// ナビゲート前に発生するイベントをセットする変数
			function<bool(const string &)> beforeNavigateFunction;
			// 読み込み完了後に発生するイベントをセットする変数
			function<void()> documentCompleteFunction;
			// 新規ウィンドウ作成時に発生するイベントをセットする変数
			function<bool(const string &)> newWindowFunction;
			
			Browser();
			explicit Browser(u32 parent, s32 x, s32 y, u32 w, u32 h);
			
			~Browser(){
				close();
				if((--flag) == 0) _Module.Term();
			}
			
			bool open(u32 parent, s32 x, s32 y, u32 w, u32 h);
			void close();
			
			// 現在表示中のURLを取得
			string getURL(){
				BSTR buf;
				browser->get_LocationURL(&buf);
				return Encoding::toUTF8((LPCWSTR)buf);
			}
			// ホームページへ
			bool goHome(){
				return SUCCEEDED(browser->GoHome());
			}
			// 前のページヘ
			bool goBack(){
				return SUCCEEDED(browser->GoBack());
			}
			// 次のページヘ
			bool goForward(){
				return SUCCEEDED(browser->GoForward());
			}
			// 指定URLへ
			bool navigate(const string &url){
				CComVariant vempty, vUrl(Encoding::utf8ToWideString(url).c_str());
				return SUCCEEDED(browser->Navigate2(&vUrl, &vempty, &vempty, &vempty, &vempty));
			}
			// 文字列として渡されたHTMLを読み込む
			bool writeHTML(const string &html);
			// Javascriptエラーダイアログ表示/非表示
			bool setSilent(bool flag){
				return SUCCEEDED(browser->put_Silent(flag? VARIANT_TRUE: VARIANT_FALSE));
			}
			// ページ更新
			bool refresh(){
				return SUCCEEDED(browser->Refresh());
			}
			// 読み込み中止
			bool stop(){
				return SUCCEEDED(browser->Stop());
			}
			
			// IEコンポーネント内のキーイベントを処理するには、親ウィンドウのprocedureで
			// WM_KEYDOWNイベント発生時にprocessKeyを実行する
			void processKey(u32 hwnd, u32 msg, u32 wp, u32 lp);
			
			// Javascript実行
			Variant executeScript(const string &funcName, s32 nArgs=0, Variant args[]=nullptr);
			
			/* ドキュメント操作関連 */
			// ドキュメント内のすべての要素を取得
			HTMLElementCollection getAllElements(){
				CComPtr<IHTMLElementCollection> pCol;
				return SUCCEEDED(pDoc2->get_all(&pCol))? pCol: nullptr;
			}
			
			// ドキュメント内にある指定タグ名を持つ要素をすべて取得
			HTMLElementCollection getElementsByTag(const string &tagName);
			// ドキュメント内にある指定<name>を持つ要素をすべて取得
			HTMLElementCollection getElementsByName(const string &name);
			
			// <id>から要素取得
			HTMLElement getElementByID(const string &id);
			
			// ドキュメントのBODYを取得
			HTMLElement getBody(){
				CComPtr<IHTMLElement> pElement;
				return SUCCEEDED(pDoc2->get_body(&pElement))? pElement: nullptr;
			}
			
			// ドキュメントコマンド実行
			bool executeCommand(const string &command, bool showUI=false, const Variant &value=Variant());
			
			
			operator HWND() const{return hwnd;}
			u32 getWindowHandle() const{return (u32)hwnd;}
			CComQIPtr<IWebBrowser2> const &getHandle() const{return browser;}
		private:
			/* IEコンポーネントイベントクラス */
			class BrowserEvent: public CComObjectRootEx<CComSingleThreadModel>,
				public IDispEventImpl<SINKID_SLIBBROWSER, BrowserEvent, &DIID_DWebBrowserEvents2>
			{
			public:
				// イベントをDispatch
				bool dispatch(Browser *_browser){
					browser = _browser;
					// タイプ ライブラリへのポインタやバージョン情報の設定
					AtlGetObjectSourceInterface(browser->browser, &m_libid, &m_iid,
						&m_wMajorVerNum, &m_wMinorVerNum);
					return SUCCEEDED(DispEventAdvise(browser->browser));
				}
			private:
				Browser *browser;
				
				BEGIN_COM_MAP(BrowserEvent)
					COM_INTERFACE_ENTRY_IID(DIID_DWebBrowserEvents2, BrowserEvent)
				END_COM_MAP()
				
				BEGIN_SINK_MAP(BrowserEvent)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_BEFORENAVIGATE2, &BrowserEvent::onBeforeNavigate2)
					//SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
					//	DISPID_NAVIGATECOMPLETE2, &BrowserEvent::onNavigateComplete2)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_DOCUMENTCOMPLETE, &BrowserEvent::onDocumentComplete)
					SINK_ENTRY_EX(SINKID_SLIBBROWSER, DIID_DWebBrowserEvents2,
						DISPID_NEWWINDOW3, &BrowserEvent::onNewWindow)
				END_SINK_MAP()
				
				void __stdcall onBeforeNavigate2(IDispatch**, VARIANT* url, VARIANT*,
					VARIANT*, VARIANT*, VARIANT*, VARIANT_BOOL* cancel)
				{
					if(browser && browser->beforeNavigateFunction){
						if(!browser->beforeNavigateFunction(Encoding::toUTF8(url->bstrVal))) (*cancel) = VARIANT_TRUE;
					}
				}
				void __stdcall onDocumentComplete(IDispatch* pDisp, VARIANT* url){
					browser->requireDocumentInterface();
					if(browser && browser->documentCompleteFunction) browser->documentCompleteFunction();
				}
				void __stdcall onNewWindow(IDispatch **ppDisp, VARIANT_BOOL *cancel, DWORD dwFlags, BSTR bstrUrlContext, BSTR bstrUrl){
					if(browser && browser->newWindowFunction){
						if(!browser->newWindowFunction(Encoding::toUTF8(bstrUrl))) (*cancel) = VARIANT_TRUE;
					}
				}
			};
			
			// HTML Documentインターフェイスを取得
			// onDocumentComplete時に呼び出される
			void requireDocumentInterface();
			
			CComObject<BrowserEvent> *event;
			CComQIPtr<IWebBrowser2> browser;
			CComQIPtr<IHTMLDocument2> pDoc2;
			CComQIPtr<IHTMLDocument3> pDoc3;
			CComQIPtr<IDispatch> pScript;
			HWND hwnd;
			
			static u32 flag; // モジュール初期化用フラグ
		protected:
			virtual u8 _getState(){ // ビジー状態考慮
				VARIANT_BOOL ret; browser->get_Busy(&ret);
				return ret == VARIANT_TRUE? BUSY: _state;
			}
		};
	}
}
