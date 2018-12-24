#pragma once

#include <process.h>
#include <map>
#include <memory>

using namespace Sltk;

struct LuaState{
	lua_State *L;
	int ref;
};
static map<u32, unique_ptr<LuaState>> states;

static unsigned int WINAPI callback(void *pParam){
	HANDLE hMutex = CreateMutex(nullptr, false, nullptr);
	LuaState *state = (LuaState*)pParam;
	
	lua_rawgeti(state->L, LUA_REGISTRYINDEX, state->ref);
	if(lua_type(state->L, -1) == LUA_TFUNCTION){
		lua_pushnumber(state->L, (u32)hMutex);
		if(0 != lua_pcall(state->L, 1, 0, 0)){
			luaL_error(state->L, lua_tostring(state->L, -1));
			lua_settop(state->L, 0);
		}
	}
	CloseHandle(hMutex);
	return 0;
}

// スレッド作成
// (function(u32 hMutex)->void) -> u32 handle, u32 id
static int createThread(lua_State *L){
	LuaState *state = new LuaState;
	state->L = L;
	state->ref = luaL_ref(L, LUA_REGISTRYINDEX);
	
	u32 id, handle = _beginthreadex(nullptr, 0, callback, state, 0, (unsigned int*)&id);
	states[handle] = unique_ptr<LuaState>(state);
	lua_pushnumber(L, handle);
	lua_pushnumber(L, id);
	return 2;
}

// スレッドハンドル破棄
// (u32 handle) -> boolean
static int releaseThread(lua_State *L){
	HANDLE handle = (HANDLE)lua_tointeger(L, 1);
	if(handle){
		states.erase((u32)handle);
		lua_pushboolean(L, CloseHandle(handle));
		return 1;
	}
	return 0;
}

// スレッドの終了待機
// (u32 handle) -> void
static int waitThread(lua_State *L){
	HANDLE handle = (HANDLE)lua_tointeger(L, 1);
	if(handle) WaitForSingleObject(handle, INFINITE);
	return 0;
}

// ミューテックスのロック（排他処理開始）
// (u32 hMutex) -> void
static int lockMutex(lua_State *L){
	HANDLE hMutex = (HANDLE)lua_tointeger(L, 1);
	if(hMutex) WaitForSingleObject(hMutex, INFINITE);
	return 0;
}

// ミューテックスのアンロック（排他処理終了）
// (u32 hMutex) -> void
static int unlockMutex(lua_State *L){
	HANDLE handle = (HANDLE)lua_tointeger(L, 1);
	if(handle) ReleaseMutex(handle);
	return 0;
}
