#pragma once

#include "../core.h"
#include <functional>
#include <map>

namespace Sltk{
	namespace Win32{
		// メッセージボックス表示
		inline s32 showMessageBox(const string &message, const string &title=_U8("メッセージ"),
			u32 mode=MB_OK|MB_ICONINFORMATION, u32 hwnd=0)
		{
			return MessageBox((HWND)hwnd, Encoding::utf8ToWideString(message).c_str(),
				Encoding::utf8ToWideString(title).c_str(), mode);
		}
		
		/* Windowクラス用通常関数 */
		bool adjustWindow(u32 hwnd, u32 w, u32 h);
		bool moveWindowToCenter(u32 hwnd, bool show=true, u32 back=(u32)GetDesktopWindow());
		
		// Windowクラス名取得
		string getWindowName(u32 hwnd, u32 max=256);
		
		// Windowタイトル設定・取得
		inline u32 setWindowText(u32 hwnd, const string &text){
			return (u32)SendMessage((HWND)hwnd, WM_SETTEXT, 0, (LPARAM)Encoding::utf8ToWideString(text).c_str());
		}
		string getWindowText(u32 hwnd);
		
		
		/** ウィンドウクラス ***/
		class Window: public Object {
		public:
			function<bool(u32,u32,u32,u32)> procedure; // イベントプロシージャ
			
			Window(): hwnd(nullptr), procedure(nullptr) {}
			explicit Window(u32 parent, const string &title, s32 x=0x80000000, s32 y=0x80000000,
				u32 w=640, u32 h=480, u32 style=WS_OVERLAPPEDWINDOW, u32 exstyle=0, const string &classname="", u32 id=0)
				: hwnd(nullptr), procedure(nullptr)
			{
				open(parent, title, x, y, w, h, style, exstyle, classname, id);
			}
			~Window(){
				close();
			}
			
			bool open(u32 parent=0, const string &title="SeleneTalkWindow", s32 x=0x80000000, s32 y=0x80000000,
				u32 w=640, u32 h=480, u32 style=WS_OVERLAPPEDWINDOW, u32 exstyle=0, const string &classname="", u32 id=0);
			
			virtual void close();
			
			// styleでWS_VISIBLEを指定しない場合ウィンドウが非表示の状態で
			// 起動するため、showメソッドを呼び出す
			bool show(u8 flag=1){
				return TRUE == ShowWindow(hwnd, flag);
			}
			
			operator HWND() const{return hwnd;}
			u32 getHandle() const{return (u32)hwnd;}
		private:
			// 共通プロシージャ
			static LRESULT CALLBACK _windowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
			
			s8 registerClass(LPCWSTR name, HINSTANCE hInst);
		protected:
			static map<HWND,Window*> _windowMap;	// プロシージャ用マップ
			
			HWND hwnd;
		};
		
		
		/* ウィンドウプロシージャ実行 */
		// whileループに渡す
		bool pollWindowMessage();
	}
}
