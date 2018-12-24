#include <sltk3/base/engine.h>

#ifdef _WINDOWS
	#include "Thread.Windows.h"
#else
	#include "Thread.Unix.h"
#endif

extern "C"{
	__export int luaopen_module(lua_State *L){
		lua_getglobal(L, "Sltk");
		lua_getfield(L, -1, "System");
		lua_pushcfunction(L, createThread);
		lua_setfield(L, -2, "createThread");
		lua_pushcfunction(L, releaseThread);
		lua_setfield(L, -2, "releaseThread");
		lua_pushcfunction(L, waitThread);
		lua_setfield(L, -2, "waitThread");
		lua_pushcfunction(L, lockMutex);
		lua_setfield(L, -2, "lockMutex");
		lua_pushcfunction(L, unlockMutex);
		lua_setfield(L, -2, "unlockMutex");
		lua_settop(L, 0);
		return 0;
	}
}
