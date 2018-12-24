#define _UseWin32Engine
#include "utils.h"
#include "tolua/module_win32.cpp"

using namespace Sltk;

#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "oleaut32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "comdlg32.lib")

// Registry::getValue
// (string name) -> u32 type, string binary
static int getRegistryValue(lua_State *L){
	tolua_Error tolua_err;
	if(!tolua_isusertype(L, 1, "Sltk::Win32::Registry", 0, &tolua_err) || !tolua_isstring(L, 2, 0, &tolua_err)){
		tolua_error(L, "#ferror in function 'Sltk::Win32::Registry::getValue'.", &tolua_err);
		return 0;
	}
	Win32::Registry *self = (Win32::Registry*)tolua_tousertype(L, 1, 0);
	if(!self){
		tolua_error(L, "invalid 'self' in function 'Sltk::Win32::Registry::getValue'", nullptr);
		return 0;
	}
	string name = lua_tostring(L, 2), buf;
	u32 size, type = self->getValue(nullptr, &size, name);
	buf.resize(size + 1);
	self->getValue((void*)&buf[0], &size, name);
	lua_pushnumber(L, type);
	lua_pushlstring(L, buf.c_str(), size);
	return 2;
}

// Registry::setValue
// (string name, u32 type, string binary, u32 size) -> boolean
static int setRegistryValue(lua_State *L){
	tolua_Error tolua_err;
	if(!tolua_isusertype(L, 1, "Sltk::Win32::Registry", 0, &tolua_err) || !tolua_isstring(L, 2, 0, &tolua_err)
		|| !tolua_isnumber(L, 3, 0, &tolua_err) || !tolua_isstring(L, 4, 0, &tolua_err))
	{
		tolua_error(L, "#ferror in function 'Sltk::Win32::Registry::setValue'.", &tolua_err);
		return 0;
	}
	Win32::Registry *self = (Win32::Registry*)tolua_tousertype(L, 1, 0);
	if(!self){
		tolua_error(L, "invalid 'self' in function 'Sltk::Win32::Registry::setValue'", nullptr);
		return 0;
	}
	size_t size;
	const char *bin = lua_tolstring(L, 4, &size);
	lua_pushboolean(L, self->setValue(lua_tostring(L, 2), lua_tointeger(L, 3),
		bin, lua_type(L, 5) == LUA_TNUMBER? lua_tointeger(L, 5): size));
	return 1;
}


extern "C" {
	__export int luaopen_module(lua_State *L){
		tolua_libSLTK_win32_open(L);
		lua_getglobal(L, "Sltk");
		lua_getfield(L, -1, "Win32");
		lua_getfield(L, -1, "Registry"); // -1:Registry<tolua>
		tolua_unlockclass(L); // -2:Registry<plain> | -1:meta
		lua_pushcfunction(L, getRegistryValue);
		lua_setfield(L, -3, "getValue");
		lua_pushcfunction(L, setRegistryValue);
		lua_setfield(L, -3, "setValue");
		tolua_lockclass(L); // -1:Win32
		lua_settop(L, 0);
		return 0;
	}
}
