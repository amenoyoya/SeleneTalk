#pragma warning(disable:4819)

//#define _UseWin32Engine
#include "../../../../../sltk3/engine.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "opencv_core249.lib")
#pragma comment(lib, "opencv_highgui249.lib")
#pragma comment(lib, "IlmImf.lib")
#pragma comment(lib, "libjasper.lib")
#pragma comment(lib, "libjpeg.lib")
#pragma comment(lib, "libpng.lib")
#pragma comment(lib, "libtiff.lib")

using namespace Sltk;
using namespace cv;

static int loadImage(lua_State *L){
	tolua_Error tolua_err;
	if(!tolua_isstring(L, 1, 0, &tolua_err)){
		tolua_error(L, "#ferror in function 'Sltk::readImage'.", &tolua_err);
		return 0;
	}
	
	size_t size = 0;
	unsigned char *buf = (unsigned char*)lua_tolstring(L, 1, &size);
	Mat img = imdecode(Mat(1, size, CV_8UC1, buf), CV_LOAD_IMAGE_COLOR);
	lua_createtable(L, 0, 0);
	lua_pushnumber(L, img.cols);
	lua_setfield(L, -2, "width");
	lua_pushnumber(L, img.rows);
	lua_setfield(L, -2, "height");
	lua_pushnumber(L, img.channels());
	lua_setfield(L, -2, "channels");
	lua_pushlstring(L, (const char*)img.data, img.cols * img.rows * img.channels());
	lua_setfield(L, -2, "data");
	return 1;
}

extern "C" {
	__export int luaopen_module(lua_State *L){
		lua_getglobal(L, "Sltk");
		lua_createtable(L, 0, 0);
		lua_pushcfunction(L, loadImage);
		lua_setfield(L, -2, "loadImage"); // Sltk::CV::loadImage
		lua_setfield(L, -2, "CV"); // Sltk::CV
		lua_settop(L, 0);
		return 0;
	}
}