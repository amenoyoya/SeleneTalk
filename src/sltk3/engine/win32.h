#pragma once

#include "core.h"
#include "../win32.h"

namespace Sltk{
	namespace Engine{
		/* LuaにWin32ライブラリ登録 */
		// 失敗した場合，Luaスタックの一番上にエラーメッセージがある
		bool registerWin32Library(lua_State *L);
	}
}
