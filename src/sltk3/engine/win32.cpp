#include "win32.h"
#include "tolua/module_win32.cpp"

namespace Sltk{
	namespace Engine{
		/* Sltk::Win32::Window用コールバック関数設定メソッド */
		// setWindowProcedure(callback = (hwnd, msg, wparam, lparam)->boolean)
		static int setWindowProcedure(lua_State *L){
			tolua_Error tolua_err;
			if(!tolua_isusertype(L, 1, "Sltk::Win32::Window", 0, &tolua_err)){
				tolua_error(L, "#ferror in function 'setWindowProcedure'.", &tolua_err);
				return 0;
			}
			
			Win32::Window *self = (Win32::Window*)tolua_tousertype(L, 1, 0);
			lua_settop(L, 2);
			s32 func = luaL_ref(L, LUA_REGISTRYINDEX);
			self->procedure = [L, func](u32 hwnd, u32 msg, u32 wp, u32 lp)->bool{
				lua_rawgeti(L, LUA_REGISTRYINDEX, func);
				if(lua_type(L, -1) == LUA_TFUNCTION){
					lua_pushnumber(L, hwnd);
					lua_pushnumber(L, msg);
					lua_pushnumber(L, wp);
					lua_pushnumber(L, lp);
					if(0 != lua_pcall(L, 4, 1, 0)){
						luaL_error(L, lua_tostring(L, -1));
						lua_settop(L, 0);
						return false;
					}
					bool ret = lua_toboolean(L, -1);
					lua_settop(L, 0);
					return ret;
				}
				return true;
			};
			return 0;
		}
		
		/* Sltk::Win32::Browser用コールバック関数設定メソッド */
		// setBrowserFunction(mode, callback)
		// @"beforeNavigate" mode: callback(url)->boolean
		// @"documentComplete" mode: callback(url)->void
		static int setBrowserFunction(lua_State *L){
			tolua_Error tolua_err;
			if(!tolua_isusertype(L, 1, "Sltk::Win32::Browser", 0, &tolua_err)
				|| !tolua_isstring(L, 2, 0, &tolua_err))
			{
				tolua_error(L, "#ferror in function 'setBrowserFunction'.", &tolua_err);
				return 0;
			}
			
			Win32::Browser *self = (Win32::Browser*)tolua_tousertype(L, 1, 0);
			string mode = lua_tostring(L, 2);
			if(!self){
				tolua_error(L, "invalid 'self' in function 'setBrowserFunction'", nullptr);
				return 0;
			}
			lua_settop(L, 3);
			s32 func = luaL_ref(L, LUA_REGISTRYINDEX);
			
			if(mode == "beforeNavigate"){
				self->beforeNavigateFunction = [L, func](const string &url)->bool{
					lua_rawgeti(L, LUA_REGISTRYINDEX, func);
					if(lua_type(L, -1) == LUA_TFUNCTION){
						lua_pushstring(L, url.c_str());
						if(0 != lua_pcall(L, 1, 1, 0)){
							luaL_error(L, lua_tostring(L, -1));
							lua_settop(L, 0);
							return false;
						}
						bool ret = lua_toboolean(L, -1);
						lua_settop(L, 0);
						return ret;
					}
					return true;
				};
			}else if(mode == "documentComplete"){
				self->documentCompleteFunction = [L, func]()->void{
					lua_rawgeti(L, LUA_REGISTRYINDEX, func);
					if(lua_type(L, -1) == LUA_TFUNCTION){
						if(0 != lua_pcall(L, 0, 0, 0)) luaL_error(L, lua_tostring(L, -1));
						lua_settop(L, 0);
					}
				};
			}else if(mode == "newWindow"){
				self->newWindowFunction = [L, func](const string &url)->bool{
					lua_rawgeti(L, LUA_REGISTRYINDEX, func);
					if(lua_type(L, -1) == LUA_TFUNCTION){
						lua_pushstring(L, url.c_str());
						if(0 != lua_pcall(L, 1, 1, 0)){
							luaL_error(L, lua_tostring(L, -1));
							lua_settop(L, 0);
							return false;
						}
						bool ret = lua_toboolean(L, -1);
						lua_settop(L, 0);
						return ret;
					}
					return true;
				};
			}
			return 0;
		}
		
		/* SeleneTalk/Win32ライブラリ */
		static u8 win32_lib_code[] = {
			#include "corelib/Win32.cpp"
		};
		
		/* Win32ライブラリを登録 */
		bool registerWin32Library(lua_State *L){
			tolua_libSLTK_win32_open(L);
			/* Sltk::Win32::Windowクラスメソッド追加登録 */
			lua_getglobal(L, "Sltk");
			lua_getfield(L, -1, "Win32");
			lua_pushcfunction(L, setWindowProcedure);
			lua_setfield(L, -2, "setWindowProcedure");
			/* Sltk::Win32::Browserクラスメソッド追加登録 */
			lua_pushcfunction(L, setBrowserFunction);
			lua_setfield(L, -2, "setBrowserFunction");
			lua_settop(L, 0);
			/* SeleneTalk/Win32ライブラリ登録 */
			if(0 != luaL_loadbuffer(L, (const char*)win32_lib_code, sizeof(win32_lib_code), "<SeleneTalk/Define/Win32>")
				|| 0 != lua_pcall(L, 0, 0, 0)) return false;
			return true;
		}
	}
}
