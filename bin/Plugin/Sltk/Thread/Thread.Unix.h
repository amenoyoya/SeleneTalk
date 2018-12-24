#pragma once

#include <pthread.h>
#include <map>
#include <memory>

using namespace Sltk;

struct LuaState{
	lua_State *L;
	int ref;
};
static map<u32,unique_ptr<LuaState>> states;

static void *callback(void *pParam){
	pthread_mutex_t hMutex;
	LuaState *state = (LuaState*)pParam;
	
	pthread_mutex_init(&hMutex, nullptr);
	lua_rawgeti(state->L, LUA_REGISTRYINDEX, state->ref);
	if(lua_type(state->L, -1) == LUA_TFUNCTION){
		lua_pushnumber(state->L, (u32)&hMutex);
		if(0 != lua_pcall(state->L, 1, 0, 0)){
			luaL_error(state->L, lua_tostring(state->L, -1));
			lua_settop(state->L, 0);
		}
	}
	pthread_mutex_destroy(&hMutex);
	return nullptr;
}

// スレッド作成
// (function(u32 hMutex)->void) -> u32 id
static int createThread(lua_State *L){
	LuaState *state = new LuaState;
	state->L = L;
	state->ref = luaL_ref(L, LUA_REGISTRYINDEX);
	
	u32 id;
	pthread_create((pthread_t*)&id, nullptr, callback, state);
	states[id] = unique_ptr<LuaState>(state);
	lua_pushnumber(L, id);
	return 1;
}

// スレッドハンドル破棄
// (u32 id) -> void
static int releaseThread(lua_State *L){
	u32 id = lua_tointeger(L, 1);
	if(id) states.erase(id);
	return 0;
}

// スレッドの終了待機
// (u32 id) -> void
static int waitThread(lua_State *L){
	pthread_t id = (pthread_t)lua_tointeger(L, 1);
	if(id) pthread_join(id, nullptr);
	return 0;
}

// ミューテックスのロック（排他処理開始）
// (u32 hMutex) -> void
static int lockMutex(lua_State *L){
	pthread_mutex_t *pMutex = (pthread_mutex_t*)lua_tointeger(L, 1);
	if(pMutex) pthread_mutex_lock(pMutex);
	return 0;
}

// ミューテックスのアンロック（排他処理終了）
// (u32 hMutex) -> void
static int unlockMutex(lua_State *L){
	pthread_mutex_t *pMutex = (pthread_mutex_t*)lua_tointeger(L, 1);
	if(pMutex) pthread_mutex_unlock(pMutex);
	return 0;
}
