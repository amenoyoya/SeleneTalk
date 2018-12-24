#pragma once

#include "../../../../win32.h"
#include "../../../../engine.h"

namespace Sltk{
	namespace Win32{
		// フォルダ選択フラグ
		enum DirectorySelectFlag{
			SD_RETURNONLYFSDIRS   = 0x0001, // ファイルシステムディレクトリのみを選択可能
			SD_DONTGOBELOWDOMAIN  = 0x0002, // ドメインのネットワークフォルダを表示しない
			SD_RETURNFSANCESTORS  = 0x0008, // ルート以下のファイル，フォルダのみ選択可能
			SD_EDITBOX            = 0x0010, // 名前編集用ボックスを表示
			SD_NEWDIALOGSTYLE     = 0x0040, // 新しいスタイルのダイアログを表示(リサイズ可能,ダイアログへのドラッグアンドドロップ,フォルダの再整理,ショートカットメニュー (コンテキスト),新しいフォルダの作成)
			SD_BROWSEINCLUDEURLS  = 0x0080, // URLを表示可能とする(SD_EDITBOX + SD_NEWDIALOGSTYLE + SD_BROWSEINCLUDEFILES の指定必須)
			SD_UAHINT             = 0x0100, // 名前編集ボックスの代わりにヒントを表示(SD_NEWDIALOGSTYLE の指定も必要)
			SD_NONEWFOLDERBUTTON  = 0x0200, // [新しいフォルダの作成] ボタンを表示しない(SD_NEWDIALOGSTYLE の指定も必要)
			SD_NOTRANSLATETARGETS = 0x0400, // 選択アイテムがショートカットの場合，リンク先ではなく，ショートカット自身の項目識別子を返す
			SD_BROWSEFORCOMPUTER  = 0x1000, // コンピュータのみ選択可能とする
			SD_BROWSEFORPRINTER   = 0x2000, // プリンタのみ選択可能とする
			SD_BROWSEINCLUDEFILES = 0x4000, // ファイルも表示して選択可能とする
			SD_SHAREABLE          = 0x8000, // 共有リソースを表示して選択可能にする(SD_EDITBOX + SD_NEWDIALOGSTYLE の指定も必要)
		};
		
		// フォルダ選択ダイアログ
		string selectDirectory(const string &title=_U8("フォルダ選択"), u32 len=MAX_PATH,
			const string &init_dir="", u32 flag=SD_RETURNONLYFSDIRS|SD_EDITBOX|SD_NEWDIALOGSTYLE, u32 parent=0);
		
		
		// ファイル選択フラグ
		enum FileSelectFlag{
			SF_READONLY           = 0x00000001, // ダイアログの「読み取り専用」チェックボックスをチェックする
			SF_OVERWRITEPROMPT    = 0x00000002, // 保存時に選択されたファイルが存在する場合上書きするか確認する
			SF_HIDEREADONLY       = 0x00000004, // 「読み取り専用」チェックボックスを隠す
			SF_SHOWHELP           = 0x00000010, // ヘルプボタンを表示する(このフラグを設定する場合，親ウィンドウを持たなければならない)
			SF_NOVALIDATE         = 0x00000100, // 無効な文字が入ったファイル名を有効とみなす
			SF_ALLOWMULTISELECT   = 0x00000200, // 複数選択を可能にする(ファイル名の間はスペースで区切られ格納される)
			SF_PATHMUSTEXIST      = 0x00000800, // 有効なパス及びファイル名でなければ入力を許さない
			SF_FILEMUSTEXIST      = 0x00001000, // 既存のファイル名しか入力を許さない
			SF_CREATEPROMPT       = 0x00002000, // 現在存在しないファイルを作成するかを求めるプロンプトを表示する
			SF_SHAREAWARE         = 0x00004000, // ネットワーク共有違反が原因で OpenFile() 関数呼び出しが失敗した場合にエラーを無視して所定のファイル名を返す
			SF_NOREADONLYRETURN   = 0x00008000, // 返されたファイルに対する「読み取り専用」チェックボックスにチェックマークを付けない
			SF_NOTESTFILECREATE   = 0x00010000, // ダイアログボックスを閉じる前にファイルを作成しない
			SF_NONETWORKBUTTON    = 0x00020000, // 「ネットワーク」ボタンを隠す
			SF_NOLONGNAMES        = 0x00040000, // 「ファイル名」リストボックスに長いファイル名を表示しない
			SF_NODEREFERENCELINKS = 0x00100000, // 選択されたショートカットファイル(.LNK)のパスとファイル名を返す
		};
		
		// ファイル選択ダイアログ
		// openmode: "open" or "save"
		string selectFile(const string &openmode, const string &title=_U8("ファイル選択"),
			const string &filter=_U8("文書ファイル/*.txt;*.rtf/全てのファイル/*.*"),
			const string &init_dir="", u32 flag=SF_FILEMUSTEXIST, u32 parent=0);
		
		// スクリーンサイズ取得
		inline u32 getScreenWidth(){
			return GetSystemMetrics(SM_CXSCREEN);
		}
		inline u32 getScreenHeight(){
			return GetSystemMetrics(SM_CYSCREEN);;
		}
		
		/*** マウス・キー入力エミュレーション ***/
		// カーソル位置を移動
		inline bool warpCursor(s32 x, s32 y){
			INPUT input = {INPUT_MOUSE,
				x * 65535 / (getScreenWidth() - 1),
				y * 65535 / (getScreenHeight() - 1),
				0, MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// マウスボタン入力
		enum MouseAction{
			MOUSEACT_LEFTDOWN   = 0x0002,
			MOUSEACT_LEFTUP     = 0x0004,
			MOUSEACT_RIGHTDOWN  = 0x0008,
			MOUSEACT_RIGHTUP    = 0x0010,
			MOUSEACT_MIDDLEDOWN = 0x0020,
			MOUSEACT_MIDDLEUP   = 0x0040,
			MOUSEACT_XDOWN      = 0x0080,
			MOUSEACT_XUP        = 0x0100,
		};
		inline bool sendMouseAction(u32 event){
			INPUT input = {INPUT_MOUSE, 0, 0, 0, event, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// ホイール回転
		// 回転量は120の倍数。通常は120か-120でOK
		inline bool sendMouseWheel(s32 rot){
			INPUT input = {INPUT_MOUSE, 0, 0, rot, MOUSEEVENTF_WHEEL, 0, 0};
			return 0 < SendInput(1, &input, sizeof(INPUT));
		}
		
		// キー入力
		// mode: -1=離す, 0=押して離す, 1=押しっぱなし
		bool sendKeyAction(u8 vkey, s8 mode=0);
		
		// 全角(UTF-8)・半角文字列入力
		// ファンクションキーやコントロールキーを使わないならこっちのほうが便利
		bool sendKeyString(const string &keys);
		
		
		// ボタンクリックエミュレーション
		inline void sendClickButton(u32 button){
			SendMessage((HWND)button, BM_CLICK, 0, 0);
		}
		
		// ファイルドロップエミュレーション
		bool sendDropFiles(u32 hwnd, const string &filename);
		
		
		/*** クリップボード関連 ***/
		// クリップボードにテキストをセット
		bool setClipboardText(const string &data, u32 hwnd=0);
		
		// クリップボードクリア
		inline bool clearClipboard(u32 hwnd=0){
			if(OpenClipboard((HWND)hwnd)){
				EmptyClipboard(); CloseClipboard(); return true;
			}
			return false;
		}
		
		// クリップボードのテキストを取得
		string getClipboardText(u32 hwnd=0);
	}
}
