#pragma warning(disable:4800)
#pragma comment(linker, "/NODEFAULTLIB:libcmt.lib")
#pragma comment(linker, "/NODEFAULTLIB:libcmtd.lib")

#include <sltk3/ext/SDL.h>
#include <sltk3/base/engine.h>
#include "tolua/module_SDL.cpp"

using namespace Sltk;

/* Sltk::SDL::open, close for Lua */
#ifdef _DESKTOP_APP
	inline int SDL_open(lua_State *L){
		lua_pushboolean(L, SDL::open());
		return 1;
	}
	
	inline int SDL_close(lua_State *L){
		SDL::close();
		return 0;
	}
#endif

/* Sltk::SDL::pollEvent for Lua */
// (function(SDL.Event)->boolean) -> boolean
static int pollEvent(lua_State *L){
	if(lua_type(L, -1) != LUA_TFUNCTION){
		lua_pushboolean(L, SDL::pollEvent(SDL::defaultEventProcedure));
		return 1;
	}
	
	SDL::Event ev;
	if(SDL::pollEvent(&ev)){
		tolua_pushusertype(L, &ev, "Sltk::SDL::Event");
		if(0 != lua_pcall(L, 1, 1, 0)){
			luaL_error(L, lua_tostring(L, -1));
			lua_settop(L, 0);
			return 0;
		}
		return 1;
	}
	lua_pushboolean(L, true);
	return 1;
}

/*** Sltk::SDL::setOnChannelFinishedFunction for Lua ***/
// (function(s32 ch)->void) -> void
static lua_State *_pLua;
static int        _chFinFunc;

static void onChannelFinished(s32 ch){
	if(!_pLua) return;
	lua_rawgeti(_pLua, LUA_REGISTRYINDEX, _chFinFunc);
	if(0 != lua_pcall(_pLua, 1, 0, 0)){
		luaL_error(_pLua, lua_tostring(_pLua, -1));
		lua_settop(_pLua, 0);
	}
}

static int setOnChannelFinishedFunction(lua_State *L){
	if(lua_type(L, -1) != LUA_TFUNCTION) return 0;
	_pLua = L;
	_chFinFunc = lua_ref(L, LUA_REGISTRYINDEX);
	SDL::setOnChannelFinishedFunction(onChannelFinished);
	return 0;
}

/*** SDL native API ***/
#ifdef _WINDOWS
	// SDL::Window -> HWND
	static int getNativeWindowHandle(lua_State *L){
		tolua_Error tolua_err;
		if(!tolua_isusertype(L, 1, "Sltk::SDL::Window", 0, &tolua_err)){
			tolua_error(L, "#ferror in function 'getNativeWindowHandle'.", &tolua_err);
			return 0;
		}
		
		SDL::Window *win = (SDL::Window*)tolua_tousertype(L, 1, 0);
		if(!win){
			lua_pushnumber(L, 0);
			return 1;
		}
		lua_pushnumber(L, SDL::getNativeWindowHandle(win));
		return 1;
	}
	
	// IME ON/OFF 状態取得
	static int getImmOpenStatus(lua_State *L){
		if(lua_type(L, 1) == LUA_TNUMBER){
			lua_pushboolean(L, FALSE != ImmGetOpenStatus(ImmGetContext((HWND)lua_tointeger(L, 1))));
		}else{
			lua_pushnil(L);
		}
		return 1;
	}
#endif


extern "C" {
	__export int luaopen_module(lua_State *L){
		tolua_libSLTK_SDL_open(L);
		/* Sltk::SDLライブラリ追加登録 */
		lua_getglobal(L, "Sltk");
		lua_getfield(L, -1, "SDL");
		lua_pushcfunction(L, pollEvent);
		lua_setfield(L, -2, "pollEvent");
		lua_pushcfunction(L, setOnChannelFinishedFunction);
		lua_setfield(L, -2, "setOnChannelFinishedFunction");
		#ifdef _DESKTOP_APP
			lua_pushcfunction(L, SDL_open);
			lua_setfield(L, -2, "open");
			lua_pushcfunction(L, SDL_close);
			lua_setfield(L, -2, "close");
		#endif
		#ifdef _WINDOWS
			lua_pushcfunction(L, getImmOpenStatus);
			lua_setfield(L, -2, "getImmOpenStatus");
			lua_getfield(L, -1, "Window"); // -1:Window<tolua>
			tolua_unlockclass(L); // -2:Window<plain> | -1:meta
			lua_pushcfunction(L, getNativeWindowHandle);
			lua_setfield(L, -3, "getNativeHandle"); // Sltk::SDL::Window::getNativeHandle
			tolua_lockclass(L); // -1:SDL
		#endif
		lua_settop(L, 0);
		return 0;
	}
}
