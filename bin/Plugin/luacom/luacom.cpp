#include <ole2.h>
#include <lua.hpp>
#include <luacom.h>

#pragma comment(lib, "lua51.lib")
#pragma comment(lib, "tolua++.lib")
#pragma comment(lib, "luacom_s.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "oleaut32.lib")
#pragma comment(lib, "htmlhelp.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "comdlg32.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "msimg32.lib")

static int closeLuaCOM(lua_State *L){
	luacom_close(L);
	CoUninitialize();
	return 0;
}

extern "C" {
	__declspec(dllexport) int luaopen_module(lua_State *L){
		// luacom“o˜^
		CoInitialize(NULL);
		luacom_open(L);
		// luacom::close“o˜^
		lua_getglobal(L, "luacom");
		lua_pushcfunction(L, closeLuaCOM);
		lua_setfield(L, -2, "close");
		lua_settop(L, 0);
		return 0;
	}
}
