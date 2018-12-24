#pragma once

/* 各種便利クラス */

#include "core.h"
#include <vector>

namespace Sltk{
	namespace Win32{
		/* コンソールを開かずにPipe処理するためのクラス */
		class Pipe: public Object {
		public:
			Pipe(){}
			explicit Pipe(const string &filename){
				open(filename);
			}
			
			bool open(const string &filename);
			void close();
			
			File *getReader(){ return &pipeReader; }
			File *getWriter(){ return &pipeWriter; }
			/* PipeWriterにより文字列を送信する場合,
			 * File::writeLine("command") が失敗するまでループする必要がある
			 */
		private:
			struct Handle{
				HANDLE handle;
				Handle(): handle(nullptr) {}
				~Handle(){
					close();
				}
				void close(){
					if(handle){
						CloseHandle(handle); handle = nullptr;
					}
				}
			};
			
			Handle	hProcess, hOutputRead, hInputWrite;
			File	pipeReader, pipeWriter;
		};
		
		
		/*** プロセス操作 ***/
		// 起動中の全プロセスを取得する
		bool acquireAllProcess();
		
		// 取得したプロセスの数、ID等
		const u32 &getProcessCount();
		const u32 &getProcessID(u32 n);
		const string &getProcessName(u32 n);
		
		/* プロセス操作クラス */
		class Process: public Object{
		public:
			Process(): hProcess(nullptr), threadID(0), processID(0) {}
			~Process(){
				close();
			}
			
			// 指定プロセスをオープンして、メモリを操作できるようにする
			bool open(const string &name);
			bool open(u32 id);
			
			// 指定プロセスを起動して、メモリを操作できるようにする
			// pathには、実行したいアプリ名と引数の両方を渡すことができる
			bool execute(const string &path);
			
			void close();
			
			/* プロセスメモリ読み込み＆書き込み */
			bool read(u32 address, void *dest, u32 size);
			
			// バイト数を指定して指定アドレスの値を取得
			u32 getValue(u32 address, u8 byte=4);
			
			// メモリを書き込む際、bufの型には十分注意すること。
			// 1byteずつの値の配列を渡す際には、unsigned char[]をbufに渡し、
			// 間違ってもint[]を渡してはならない。
			bool write(u32 address, const void *buf, u32 size);
			
			// 文字列を使った特殊な書き込み
			// 2文字ずつの単位で16進数WORDとして書き込んでいく
			// ??で指定された部分の値は変更しない
			bool writeExpression(u32 address, const string &exp);
			
			bool setValue(u32 address, u32 val, u32 byte=4){
				return write(address, &val, byte);
			}
			
			// プロセスが呼び出したモジュールを内部で列挙する
			// モジュール数が返る
			u32 acquireModules();
			
			// enumModule実行後：モジュール名を取得
			string getModuleNameFromHandle(u32 hmod); // enumerateModules無関係
			string getModuleName(u32 index);
			
			// enumModule実行後：モジュール名からモジュールハンドルを検索
			u32 getModule(const string &name);
			
			// 開いているプロセスを終了させる
			bool kill(){
				return FALSE != TerminateProcess(hProcess, 0);
			}
			
			// 開いているスレッドのID (executeで起動した場合のみ存在)
			const u32 &getThreadID() const{return threadID;}
			// 開いているプロセスのID
			const u32 &getProcessID() const{return processID;}
			
			// プロセスハンドル
			u32 getHandle() const{return (u32)hProcess;}
		private:
			HANDLE hProcess;
			u32 threadID, processID;
			vector<HMODULE> hModules;
		protected:
			// 現在のプロセスの終了状態を考慮
			virtual u8 _getState();
		};
		
		
		/* ----- レジストリ操作クラス ----- */
		class Registry: public Object {
		public:
			Registry(): regKey(nullptr), hKey(nullptr) {}
			~Registry(){
				close();
			}
			
			bool open(u32 key /*REG_CURRENT_USER*/, const string &sub);
			bool create(u32 key, const string &sub);
			void close();
			
			// nameに""を指定すると、(既定)になる
			// 戻り値：type（レジストリ種類）
			u32 getValue(void *data, u32 *size, const string &name);
			
			// nameに""を指定すると、(既定)になる
			// type: レジストリ種類 REG_DWORDなど
			bool setValue(const string &name, u32 type, const char *data, u32 size=u32(-1));
			
			void remove(u32 MAX_KEY_LENGTH=256);	//openしているレジストリキーを削除
			
			bool remove(const string &name){
				// openしているレジストリキーのValue(=name)を削除
				return ERROR_SUCCESS == RegDeleteValue(regKey,
					name == ""? nullptr: Encoding::utf8ToWideString(name).c_str());
			}
		private:
			HKEY regKey, hKey;
			string subKey;
		};
		
		//レジストリ変更をすぐに反映する
		void reflectRegistry();
		
		
		/*** 色選択ダイアログ ***/
		class ColorDialog: public Object {
		public:
			u32 color; // 選択された色コード
		public:
			explicit ColorDialog(u32 color=0): color(color){
				ZeroMemory(customColors, sizeof(customColors));
			}
			
			// カスタムカラーを設定
			void setCustomColors(u32 colors[16]);
			
			// ダイアログ表示
			bool show(u32 parent=0);
		private:
			u32 customColors[16];
		};
		
		
		/*** フォント選択ダイアログ ***/
		/*class FontDialog: public Object {
		public:
			string fontName; // 選択されたフォント名
			u32 fontSize; // 選択されたフォントのサイズ
		public:
			FontDialog(): fontSize(0) {}
			
			// ダイアログ表示
			bool show(const string &initFontName="", u32 initFontSize=0, u32 parent=0);
		};*/
	}
}
