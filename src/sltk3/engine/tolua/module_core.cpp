/*
** Lua binding: libSLTK_core
** Generated automatically by tolua++-1.0.93 on 09/24/17 14:57:11.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libSLTK_core_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Sltk__File (lua_State* tolua_S)
{
 Sltk::File* self = (Sltk::File*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__ZipArchiver (lua_State* tolua_S)
{
 Sltk::ZipArchiver* self = (Sltk::ZipArchiver*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__FileReader (lua_State* tolua_S)
{
 Sltk::FileReader* self = (Sltk::FileReader*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__FileEnumerator (lua_State* tolua_S)
{
 Sltk::FileEnumerator* self = (Sltk::FileEnumerator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__ZipGlobalInformation (lua_State* tolua_S)
{
 Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__Randomizer (lua_State* tolua_S)
{
 Sltk::Randomizer* self = (Sltk::Randomizer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__ZipFileReader (lua_State* tolua_S)
{
 Sltk::ZipFileReader* self = (Sltk::ZipFileReader*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__LibraryLoader (lua_State* tolua_S)
{
 Sltk::LibraryLoader* self = (Sltk::LibraryLoader*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Sltk__ZipFileInformation (lua_State* tolua_S)
{
 Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Sltk::File");
 tolua_usertype(tolua_S,"Sltk::ZipFileInformation");
 tolua_usertype(tolua_S,"Sltk::FileReader");
 tolua_usertype(tolua_S,"Sltk::FileEnumerator");
 tolua_usertype(tolua_S,"Sltk::ZipFileReader");
 tolua_usertype(tolua_S,"Sltk::ZipGlobalInformation");
 tolua_usertype(tolua_S,"Sltk::Randomizer");
 tolua_usertype(tolua_S,"Sltk::ZipArchiver");
 tolua_usertype(tolua_S,"Sltk::ZipFileInformation::_DateTime");
 tolua_usertype(tolua_S,"Sltk::Object");
 tolua_usertype(tolua_S,"Sltk::LibraryLoader");
}

/* function: Sltk::isSameString */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_isSameString00
static int tolua_libSLTK_core_Sltk_isSameString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* s1 = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* s2 = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::isSameString(s1,s2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSameString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::isSameString */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_isSameString01
static int tolua_libSLTK_core_Sltk_isSameString01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* s1 = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* s2 = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long len = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Sltk::isSameString(s1,s2,len);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_isSameString00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Encoding::getName */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Encoding_getName00
static int tolua_libSLTK_core_Sltk_Encoding_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* target = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Encoding::getName(target);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Encoding::isUTF8 */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Encoding_isUTF800
static int tolua_libSLTK_core_Sltk_Encoding_isUTF800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const string target = ((const string)  tolua_tocppstring(tolua_S,1,0));
  {
    char tolua_ret = (  char)  Sltk::Encoding::isUTF8(target);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)target);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUTF8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Encoding::encode */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Encoding_encode00
static int tolua_libSLTK_core_Sltk_Encoding_encode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* target = ((const char*)  tolua_tostring(tolua_S,1,0));
  unsigned char toEncoding = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char fromEncoding = (( unsigned char)  tolua_tonumber(tolua_S,3,Sltk::Encoding::UNKNOWN));
  {
   string tolua_ret = (string)  Sltk::Encoding::encode(target,toEncoding,fromEncoding);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'encode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Encoding::toUTF8 */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Encoding_toUTF800
static int tolua_libSLTK_core_Sltk_Encoding_toUTF800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* target = ((const char*)  tolua_tostring(tolua_S,1,0));
  unsigned char fromEncoding = (( unsigned char)  tolua_tonumber(tolua_S,2,Sltk::Encoding::UNKNOWN));
  {
   string tolua_ret = (string)  Sltk::Encoding::toUTF8(target,fromEncoding);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUTF8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::writeLine */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_writeLine00
static int tolua_libSLTK_core_Sltk_Console_writeLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   Sltk::Console::writeLine(str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::write */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_write00
static int tolua_libSLTK_core_Sltk_Console_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   Sltk::Console::write(str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::setAttribute */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_setAttribute00
static int tolua_libSLTK_core_Sltk_Console_setAttribute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   char wFore = ((  char)  tolua_tonumber(tolua_S,1,Sltk::Console::WHITE));
   char wBlack = ((  char)  tolua_tonumber(tolua_S,2,Sltk::Console::BLACK));
  bool bHigh = ((bool)  tolua_toboolean(tolua_S,3,false));
  bool bUnderscore = ((bool)  tolua_toboolean(tolua_S,4,false));
  {
   bool tolua_ret = (bool)  Sltk::Console::setAttribute(wFore,wBlack,bHigh,bUnderscore);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttribute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::setCursorPosition */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_setCursorPosition00
static int tolua_libSLTK_core_Sltk_Console_setCursorPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   short shXPos = ((  short)  tolua_tonumber(tolua_S,1,0));
   short shYPos = ((  short)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Console::setCursorPosition(shXPos,shYPos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCursorPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::clear */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_clear00
static int tolua_libSLTK_core_Sltk_Console_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  Sltk::Console::clear();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::isKeyPressed */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_isKeyPressed00
static int tolua_libSLTK_core_Sltk_Console_isKeyPressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  Sltk::Console::isKeyPressed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isKeyPressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Console::getPressedKey */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Console_getPressedKey00
static int tolua_libSLTK_core_Sltk_Console_getPressedKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
    long tolua_ret = (  long)  Sltk::Console::getPressedKey();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPressedKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::execute */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_execute00
static int tolua_libSLTK_core_Sltk_System_execute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* cmd = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    long tolua_ret = (  long)  Sltk::System::execute(cmd);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'execute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::sleep */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_sleep00
static int tolua_libSLTK_core_Sltk_System_sleep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long msec = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   Sltk::System::sleep(msec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sleep'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::getTime */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_getTime00
static int tolua_libSLTK_core_Sltk_System_getTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  Sltk::System::getTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::setEnvironmentVariable */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_setEnvironmentVariable00
static int tolua_libSLTK_core_Sltk_System_setEnvironmentVariable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* val = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::System::setEnvironmentVariable(name,val);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnvironmentVariable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::getEnvironmentVariable */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_getEnvironmentVariable00
static int tolua_libSLTK_core_Sltk_System_getEnvironmentVariable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::System::getEnvironmentVariable(name);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEnvironmentVariable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::setCurrentDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_setCurrentDirectory00
static int tolua_libSLTK_core_Sltk_System_setCurrentDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* dir = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::System::setCurrentDirectory(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::System::getCurrentDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_System_getCurrentDirectory00
static int tolua_libSLTK_core_Sltk_System_getCurrentDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  Sltk::System::getCurrentDirectory();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::getState */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_getState00
static int tolua_libSLTK_core_Sltk_getState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Object* obj = ((Sltk::Object*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned char tolua_ret = ( unsigned char)  Sltk::getState(obj);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::getMessage */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_getMessage00
static int tolua_libSLTK_core_Sltk_getMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Object* obj = ((Sltk::Object*)  tolua_tousertype(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::getMessage(obj);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_new00
static int tolua_libSLTK_core_Sltk_LibraryLoader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::LibraryLoader* tolua_ret = (Sltk::LibraryLoader*)  Mtolua_new((Sltk::LibraryLoader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::LibraryLoader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_new00_local
static int tolua_libSLTK_core_Sltk_LibraryLoader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::LibraryLoader* tolua_ret = (Sltk::LibraryLoader*)  Mtolua_new((Sltk::LibraryLoader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::LibraryLoader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_new01
static int tolua_libSLTK_core_Sltk_LibraryLoader_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::LibraryLoader* tolua_ret = (Sltk::LibraryLoader*)  Mtolua_new((Sltk::LibraryLoader)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::LibraryLoader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_LibraryLoader_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_new01_local
static int tolua_libSLTK_core_Sltk_LibraryLoader_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::LibraryLoader* tolua_ret = (Sltk::LibraryLoader*)  Mtolua_new((Sltk::LibraryLoader)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::LibraryLoader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_LibraryLoader_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_delete00
static int tolua_libSLTK_core_Sltk_LibraryLoader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::LibraryLoader* self = (Sltk::LibraryLoader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_open00
static int tolua_libSLTK_core_Sltk_LibraryLoader_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::LibraryLoader* self = (Sltk::LibraryLoader*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::LibraryLoader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_LibraryLoader_close00
static int tolua_libSLTK_core_Sltk_LibraryLoader_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::LibraryLoader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::LibraryLoader* self = (Sltk::LibraryLoader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new00
static int tolua_libSLTK_core_Sltk_Randomizer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new00_local
static int tolua_libSLTK_core_Sltk_Randomizer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new01
static int tolua_libSLTK_core_Sltk_Randomizer_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   long _seed = ((  long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)(_seed));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new01_local
static int tolua_libSLTK_core_Sltk_Randomizer_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   long _seed = ((  long)  tolua_tonumber(tolua_S,2,0));
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)(_seed));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new02
static int tolua_libSLTK_core_Sltk_Randomizer_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   long seedsNum = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifdef __cplusplus
   long* seeds = Mtolua_new_dim(long, seedsNum);
#else
   long* seeds = (long*) malloc((seedsNum)*sizeof(long));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,3,seedsNum,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<seedsNum;i++)
    seeds[i] = ((long)  tolua_tofieldnumber(tolua_S,3,i+1,0));
   }
  }
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)(seedsNum,seeds));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
  }
  {
   int i;
   for(i=0; i<seedsNum;i++)
    tolua_pushfieldnumber(tolua_S,3,i+1,(lua_Number) seeds[i]);
  }
#ifdef __cplusplus
  Mtolua_delete_dim(seeds);
#else
  free(seeds);
#endif
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_new02_local
static int tolua_libSLTK_core_Sltk_Randomizer_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   long seedsNum = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifdef __cplusplus
   long* seeds = Mtolua_new_dim(long, seedsNum);
#else
   long* seeds = (long*) malloc((seedsNum)*sizeof(long));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,3,seedsNum,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<seedsNum;i++)
    seeds[i] = ((long)  tolua_tofieldnumber(tolua_S,3,i+1,0));
   }
  }
  {
   Sltk::Randomizer* tolua_ret = (Sltk::Randomizer*)  Mtolua_new((Sltk::Randomizer)(seedsNum,seeds));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::Randomizer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
  {
   int i;
   for(i=0; i<seedsNum;i++)
    tolua_pushfieldnumber(tolua_S,3,i+1,(lua_Number) seeds[i]);
  }
#ifdef __cplusplus
  Mtolua_delete_dim(seeds);
#else
  free(seeds);
#endif
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: seed of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_seed00
static int tolua_libSLTK_core_Sltk_Randomizer_seed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Randomizer* self = (Sltk::Randomizer*)  tolua_tousertype(tolua_S,1,0);
   long _seed = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seed'", NULL);
#endif
  {
   self->seed(_seed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seed of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_seed01
static int tolua_libSLTK_core_Sltk_Randomizer_seed01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Randomizer* self = (Sltk::Randomizer*)  tolua_tousertype(tolua_S,1,0);
   long seedsNum = ((  long)  tolua_tonumber(tolua_S,2,0));
#ifdef __cplusplus
   long* seeds = Mtolua_new_dim(long, seedsNum);
#else
   long* seeds = (long*) malloc((seedsNum)*sizeof(long));
#endif
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seed'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,3,seedsNum,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<seedsNum;i++)
    seeds[i] = ((long)  tolua_tofieldnumber(tolua_S,3,i+1,0));
   }
  }
  {
   self->seed(seedsNum,seeds);
  }
  {
   int i;
   for(i=0; i<seedsNum;i++)
    tolua_pushfieldnumber(tolua_S,3,i+1,(lua_Number) seeds[i]);
  }
#ifdef __cplusplus
  Mtolua_delete_dim(seeds);
#else
  free(seeds);
#endif
 }
 return 0;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_seed00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_get00
static int tolua_libSLTK_core_Sltk_Randomizer_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::Randomizer* self = (Sltk::Randomizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->get();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_get01
static int tolua_libSLTK_core_Sltk_Randomizer_get01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Randomizer* self = (Sltk::Randomizer*)  tolua_tousertype(tolua_S,1,0);
  unsigned long r = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->get(r);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_get00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  Sltk::Randomizer */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Randomizer_get02
static int tolua_libSLTK_core_Sltk_Randomizer_get02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::Randomizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::Randomizer* self = (Sltk::Randomizer*)  tolua_tousertype(tolua_S,1,0);
   long min = ((  long)  tolua_tonumber(tolua_S,2,0));
   long max = ((  long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
    long tolua_ret = (  long)  self->get(min,max);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Randomizer_get01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Engine::encodeDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Engine_encodeDirectory00
static int tolua_libSLTK_core_Sltk_Engine_encodeDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* dirPath = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* outputFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,3,""));
  unsigned char level = (( unsigned char)  tolua_tonumber(tolua_S,4,6));
  {
   bool tolua_ret = (bool)  Sltk::Engine::encodeDirectory(dirPath,outputFile,key,level);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'encodeDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::getLeaf */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_getLeaf00
static int tolua_libSLTK_core_Sltk_Path_getLeaf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::getLeaf(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeaf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::getStem */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_getStem00
static int tolua_libSLTK_core_Sltk_Path_getStem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::getStem(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::getExtension */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_getExtension00
static int tolua_libSLTK_core_Sltk_Path_getExtension00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::getExtension(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExtension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::convert */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_convert00
static int tolua_libSLTK_core_Sltk_Path_convert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::convert(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::isSame */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_isSame00
static int tolua_libSLTK_core_Sltk_Path_isSame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path1 = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* path2 = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::Path::isSame(path1,path2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::isSame */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_isSame01
static int tolua_libSLTK_core_Sltk_Path_isSame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path1 = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* path2 = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long len = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Sltk::Path::isSame(path1,path2,len);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_Path_isSame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::getParent */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_getParent00
static int tolua_libSLTK_core_Sltk_Path_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  bool real = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   string tolua_ret = (string)  Sltk::Path::getParent(path,real);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::isFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_isFile00
static int tolua_libSLTK_core_Sltk_Path_isFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Path::isFile(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::isDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_isDirectory00
static int tolua_libSLTK_core_Sltk_Path_isDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::Path::isDirectory(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::complete */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_complete00
static int tolua_libSLTK_core_Sltk_Path_complete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::complete(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'complete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::appendSlash */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_appendSlash00
static int tolua_libSLTK_core_Sltk_Path_appendSlash00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::appendSlash(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'appendSlash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::Path::removeSlash */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_Path_removeSlash00
static int tolua_libSLTK_core_Sltk_Path_removeSlash00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string path = ((string)  tolua_tocppstring(tolua_S,1,0));
  {
   string tolua_ret = (string)  Sltk::Path::removeSlash(path);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSlash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new00
static int tolua_libSLTK_core_Sltk_File_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new00_local
static int tolua_libSLTK_core_Sltk_File_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new01
static int tolua_libSLTK_core_Sltk_File_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* mode = ((const char*)  tolua_tostring(tolua_S,3,"r"));
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)(path,mode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_File_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new01_local
static int tolua_libSLTK_core_Sltk_File_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* mode = ((const char*)  tolua_tostring(tolua_S,3,"r"));
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)(path,mode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_File_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new02
static int tolua_libSLTK_core_Sltk_File_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long pFile = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned char closeMode = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)(pFile,closeMode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_File_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_new02_local
static int tolua_libSLTK_core_Sltk_File_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long pFile = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned char closeMode = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
  {
   Sltk::File* tolua_ret = (Sltk::File*)  Mtolua_new((Sltk::File)(pFile,closeMode));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::File");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_File_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_delete00
static int tolua_libSLTK_core_Sltk_File_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_open00
static int tolua_libSLTK_core_Sltk_File_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* mode = ((const char*)  tolua_tostring(tolua_S,3,"r"));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(path,mode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_open01
static int tolua_libSLTK_core_Sltk_File_open01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
  unsigned long pFile = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned char closeMode = (( unsigned char)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(pFile,closeMode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_File_open00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_close00
static int tolua_libSLTK_core_Sltk_File_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_getSize00
static int tolua_libSLTK_core_Sltk_File_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readLine of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_readLine00
static int tolua_libSLTK_core_Sltk_File_readLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readLine'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readLine();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readChar of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_readChar00
static int tolua_libSLTK_core_Sltk_File_readChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readChar'", NULL);
#endif
  {
    char tolua_ret = (  char)  self->readChar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeLine of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_writeLine00
static int tolua_libSLTK_core_Sltk_File_writeLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeLine'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeLine(text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeChar of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_writeChar00
static int tolua_libSLTK_core_Sltk_File_writeChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
   char c = ((  char)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeChar'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeChar(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readAll of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_readAll00
static int tolua_libSLTK_core_Sltk_File_readAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readAll'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readAll();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seek of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_seek00
static int tolua_libSLTK_core_Sltk_File_seek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
   long move = ((  long)  tolua_tonumber(tolua_S,2,0L));
  unsigned char from = (( unsigned char)  tolua_tonumber(tolua_S,3,SEEK_SET));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seek'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->seek(move,from);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_getPosition00
static int tolua_libSLTK_core_Sltk_File_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getPosition();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: flush of class  Sltk::File */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_File_flush00
static int tolua_libSLTK_core_Sltk_File_flush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::File* self = (Sltk::File*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'flush'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->flush();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'flush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_new00
static int tolua_libSLTK_core_Sltk_FileEnumerator_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::FileEnumerator* tolua_ret = (Sltk::FileEnumerator*)  Mtolua_new((Sltk::FileEnumerator)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileEnumerator");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_new00_local
static int tolua_libSLTK_core_Sltk_FileEnumerator_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::FileEnumerator* tolua_ret = (Sltk::FileEnumerator*)  Mtolua_new((Sltk::FileEnumerator)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileEnumerator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_new01
static int tolua_libSLTK_core_Sltk_FileEnumerator_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* dir = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::FileEnumerator* tolua_ret = (Sltk::FileEnumerator*)  Mtolua_new((Sltk::FileEnumerator)(dir));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileEnumerator");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_FileEnumerator_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_new01_local
static int tolua_libSLTK_core_Sltk_FileEnumerator_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* dir = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Sltk::FileEnumerator* tolua_ret = (Sltk::FileEnumerator*)  Mtolua_new((Sltk::FileEnumerator)(dir));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileEnumerator");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_FileEnumerator_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_delete00
static int tolua_libSLTK_core_Sltk_FileEnumerator_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileEnumerator* self = (Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_open00
static int tolua_libSLTK_core_Sltk_FileEnumerator_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileEnumerator* self = (Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
  const char* dir = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_close00
static int tolua_libSLTK_core_Sltk_FileEnumerator_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileEnumerator* self = (Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toNext of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_toNext00
static int tolua_libSLTK_core_Sltk_FileEnumerator_toNext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileEnumerator* self = (Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toNext'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->toNext();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_getName00
static int tolua_libSLTK_core_Sltk_FileEnumerator_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::FileEnumerator* self = (const Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPath of class  Sltk::FileEnumerator */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileEnumerator_getPath00
static int tolua_libSLTK_core_Sltk_FileEnumerator_getPath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::FileEnumerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::FileEnumerator* self = (const Sltk::FileEnumerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPath'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getPath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::copyFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_copyFile00
static int tolua_libSLTK_core_Sltk_copyFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* src = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* dest = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool overwrite = ((bool)  tolua_toboolean(tolua_S,3,true));
  {
   bool tolua_ret = (bool)  Sltk::copyFile(src,dest,overwrite);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'copyFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::removeFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_removeFile00
static int tolua_libSLTK_core_Sltk_removeFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::removeFile(file);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::moveFile */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_moveFile00
static int tolua_libSLTK_core_Sltk_moveFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* src = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* dest = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool overwrite = ((bool)  tolua_toboolean(tolua_S,3,true));
  {
   bool tolua_ret = (bool)  Sltk::moveFile(src,dest,overwrite);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::createDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_createDirectory00
static int tolua_libSLTK_core_Sltk_createDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* dir = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::createDirectory(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::copyDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_copyDirectory00
static int tolua_libSLTK_core_Sltk_copyDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* src = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* dest = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::copyDirectory(src,dest);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'copyDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::removeDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_removeDirectory00
static int tolua_libSLTK_core_Sltk_removeDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* dir = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::removeDirectory(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::moveDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_moveDirectory00
static int tolua_libSLTK_core_Sltk_moveDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* src = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* dest = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  Sltk::moveDirectory(src,dest);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: entries of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipGlobalInformation_unsigned_entries
static int tolua_get_Sltk__ZipGlobalInformation_unsigned_entries(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'entries'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->entries);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: entries of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipGlobalInformation_unsigned_entries
static int tolua_set_Sltk__ZipGlobalInformation_unsigned_entries(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'entries'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->entries = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: commentSize of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipGlobalInformation_unsigned_commentSize
static int tolua_get_Sltk__ZipGlobalInformation_unsigned_commentSize(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'commentSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->commentSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: commentSize of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipGlobalInformation_unsigned_commentSize
static int tolua_set_Sltk__ZipGlobalInformation_unsigned_commentSize(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'commentSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->commentSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: comment of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipGlobalInformation_comment
static int tolua_get_Sltk__ZipGlobalInformation_comment(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'comment'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->comment);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: comment of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipGlobalInformation_comment
static int tolua_set_Sltk__ZipGlobalInformation_comment(lua_State* tolua_S)
{
  Sltk::ZipGlobalInformation* self = (Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'comment'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->comment = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00
static int tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipGlobalInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipGlobalInformation* tolua_ret = (Sltk::ZipGlobalInformation*)  Mtolua_new((Sltk::ZipGlobalInformation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipGlobalInformation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipGlobalInformation */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00_local
static int tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipGlobalInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipGlobalInformation* tolua_ret = (Sltk::ZipGlobalInformation*)  Mtolua_new((Sltk::ZipGlobalInformation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipGlobalInformation");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: version of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_version
static int tolua_get_Sltk__ZipFileInformation_unsigned_version(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'version'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->version);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: version of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_version
static int tolua_set_Sltk__ZipFileInformation_unsigned_version(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'version'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->version = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: neededVersion of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_neededVersion
static int tolua_get_Sltk__ZipFileInformation_unsigned_neededVersion(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'neededVersion'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->neededVersion);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: neededVersion of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_neededVersion
static int tolua_set_Sltk__ZipFileInformation_unsigned_neededVersion(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'neededVersion'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->neededVersion = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: flag of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_flag
static int tolua_get_Sltk__ZipFileInformation_unsigned_flag(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'flag'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->flag);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: flag of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_flag
static int tolua_set_Sltk__ZipFileInformation_unsigned_flag(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'flag'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->flag = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: compressionMethod of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_compressionMethod
static int tolua_get_Sltk__ZipFileInformation_unsigned_compressionMethod(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'compressionMethod'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->compressionMethod);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: compressionMethod of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_compressionMethod
static int tolua_set_Sltk__ZipFileInformation_unsigned_compressionMethod(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'compressionMethod'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->compressionMethod = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dosDate of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_dosDate
static int tolua_get_Sltk__ZipFileInformation_unsigned_dosDate(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dosDate'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->dosDate);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dosDate of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_dosDate
static int tolua_set_Sltk__ZipFileInformation_unsigned_dosDate(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dosDate'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dosDate = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: crc of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_crc
static int tolua_get_Sltk__ZipFileInformation_unsigned_crc(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crc'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->crc);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: crc of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_crc
static int tolua_set_Sltk__ZipFileInformation_unsigned_crc(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'crc'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->crc = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: compressedSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_compressedSize
static int tolua_get_Sltk__ZipFileInformation_unsigned_compressedSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'compressedSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->compressedSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: compressedSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_compressedSize
static int tolua_set_Sltk__ZipFileInformation_unsigned_compressedSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'compressedSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->compressedSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uncompressedSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_uncompressedSize
static int tolua_get_Sltk__ZipFileInformation_unsigned_uncompressedSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uncompressedSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uncompressedSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uncompressedSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_uncompressedSize
static int tolua_set_Sltk__ZipFileInformation_unsigned_uncompressedSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uncompressedSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->uncompressedSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fileNameSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_fileNameSize
static int tolua_get_Sltk__ZipFileInformation_unsigned_fileNameSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileNameSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->fileNameSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fileNameSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_fileNameSize
static int tolua_set_Sltk__ZipFileInformation_unsigned_fileNameSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileNameSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fileNameSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fileExtraSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_fileExtraSize
static int tolua_get_Sltk__ZipFileInformation_unsigned_fileExtraSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileExtraSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->fileExtraSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fileExtraSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_fileExtraSize
static int tolua_set_Sltk__ZipFileInformation_unsigned_fileExtraSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileExtraSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fileExtraSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fileCommentSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_fileCommentSize
static int tolua_get_Sltk__ZipFileInformation_unsigned_fileCommentSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileCommentSize'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->fileCommentSize);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fileCommentSize of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_fileCommentSize
static int tolua_set_Sltk__ZipFileInformation_unsigned_fileCommentSize(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileCommentSize'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fileCommentSize = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: diskNumStart of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_diskNumStart
static int tolua_get_Sltk__ZipFileInformation_unsigned_diskNumStart(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diskNumStart'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->diskNumStart);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: diskNumStart of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_diskNumStart
static int tolua_set_Sltk__ZipFileInformation_unsigned_diskNumStart(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'diskNumStart'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->diskNumStart = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: internalFA of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_internalFA
static int tolua_get_Sltk__ZipFileInformation_unsigned_internalFA(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'internalFA'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->internalFA);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: internalFA of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_internalFA
static int tolua_set_Sltk__ZipFileInformation_unsigned_internalFA(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'internalFA'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->internalFA = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: externalFA of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_unsigned_externalFA
static int tolua_get_Sltk__ZipFileInformation_unsigned_externalFA(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'externalFA'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->externalFA);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: externalFA of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_unsigned_externalFA
static int tolua_set_Sltk__ZipFileInformation_unsigned_externalFA(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'externalFA'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->externalFA = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sec of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_sec
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_sec(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sec'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sec);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sec of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_sec
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_sec(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sec'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sec = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: min of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_min
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_min(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'min'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->min);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: min of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_min
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_min(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'min'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->min = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hour of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_hour
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_hour(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hour'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->hour);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hour of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_hour
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_hour(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hour'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hour = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: day of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_day
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_day(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'day'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->day);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: day of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_day
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_day(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'day'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->day = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: month of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_month
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_month(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'month'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->month);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: month of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_month
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_month(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'month'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->month = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: year of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_year
static int tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_year(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'year'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->year);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: year of class  _DateTime */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_year
static int tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_year(lua_State* tolua_S)
{
  Sltk::ZipFileInformation::_DateTime* self = (Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'year'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->year = (( unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: date of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_date
static int tolua_get_Sltk__ZipFileInformation_date(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'date'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->date,"Sltk::ZipFileInformation::_DateTime");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: date of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_date
static int tolua_set_Sltk__ZipFileInformation_date(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'date'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Sltk::ZipFileInformation::_DateTime",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->date = *((Sltk::ZipFileInformation::_DateTime*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fileName of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_fileName
static int tolua_get_Sltk__ZipFileInformation_fileName(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->fileName);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fileName of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_fileName
static int tolua_set_Sltk__ZipFileInformation_fileName(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fileName'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fileName = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: comment of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_get_Sltk__ZipFileInformation_comment
static int tolua_get_Sltk__ZipFileInformation_comment(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'comment'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->comment);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: comment of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_set_Sltk__ZipFileInformation_comment
static int tolua_set_Sltk__ZipFileInformation_comment(lua_State* tolua_S)
{
  Sltk::ZipFileInformation* self = (Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'comment'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->comment = ((string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileInformation_new00
static int tolua_libSLTK_core_Sltk_ZipFileInformation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipFileInformation* tolua_ret = (Sltk::ZipFileInformation*)  Mtolua_new((Sltk::ZipFileInformation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileInformation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipFileInformation */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileInformation_new00_local
static int tolua_libSLTK_core_Sltk_ZipFileInformation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipFileInformation* tolua_ret = (Sltk::ZipFileInformation*)  Mtolua_new((Sltk::ZipFileInformation)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileInformation");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_new00
static int tolua_libSLTK_core_Sltk_ZipArchiver_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipArchiver* tolua_ret = (Sltk::ZipArchiver*)  Mtolua_new((Sltk::ZipArchiver)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipArchiver");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_new00_local
static int tolua_libSLTK_core_Sltk_ZipArchiver_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipArchiver* tolua_ret = (Sltk::ZipArchiver*)  Mtolua_new((Sltk::ZipArchiver)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipArchiver");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_new01
static int tolua_libSLTK_core_Sltk_ZipArchiver_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* type = ((const char*)  tolua_tostring(tolua_S,3,"w"));
  {
   Sltk::ZipArchiver* tolua_ret = (Sltk::ZipArchiver*)  Mtolua_new((Sltk::ZipArchiver)(filename,type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipArchiver");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_ZipArchiver_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_new01_local
static int tolua_libSLTK_core_Sltk_ZipArchiver_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* type = ((const char*)  tolua_tostring(tolua_S,3,"w"));
  {
   Sltk::ZipArchiver* tolua_ret = (Sltk::ZipArchiver*)  Mtolua_new((Sltk::ZipArchiver)(filename,type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipArchiver");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_ZipArchiver_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_delete00
static int tolua_libSLTK_core_Sltk_ZipArchiver_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_open00
static int tolua_libSLTK_core_Sltk_ZipArchiver_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* type = ((const char*)  tolua_tostring(tolua_S,3,"w"));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(filename,type);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_close00
static int tolua_libSLTK_core_Sltk_ZipArchiver_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  const char* comment = ((const char*)  tolua_tostring(tolua_S,2,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->close(comment);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: appendFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_appendFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_appendFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  const char* destFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* srcFileName = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
  unsigned char level = (( unsigned char)  tolua_tonumber(tolua_S,5,6));
  const char* comment = ((const char*)  tolua_tostring(tolua_S,6,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'appendFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->appendFile(destFileName,srcFileName,password,level,comment);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'appendFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGlobalInformation of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_getGlobalInformation00
static int tolua_libSLTK_core_Sltk_ZipArchiver_getGlobalInformation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Sltk::ZipGlobalInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::ZipArchiver* self = (const Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  Sltk::ZipGlobalInformation* info = ((Sltk::ZipGlobalInformation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGlobalInformation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getGlobalInformation(info);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGlobalInformation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_getSize00
static int tolua_libSLTK_core_Sltk_ZipArchiver_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::ZipArchiver* self = (const Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   unsigned const long tolua_ret = ( unsigned const long)  self->getSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toFirstFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_toFirstFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_toFirstFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toFirstFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->toFirstFile();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toFirstFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toNextFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_toNextFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_toNextFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toNextFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->toNextFile();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toNextFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: locateFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_locateFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_locateFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'locateFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->locateFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'locateFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentFileInformation of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFileInformation00
static int tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFileInformation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Sltk::ZipFileInformation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::ZipArchiver* self = (const Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  Sltk::ZipFileInformation* info = ((Sltk::ZipFileInformation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentFileInformation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getCurrentFileInformation(info);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentFileInformation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentOffset of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentOffset00
static int tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::ZipArchiver* self = (const Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentOffset'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getCurrentOffset();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: openCurrentFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_openCurrentFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_openCurrentFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
  const char* password = ((const char*)  tolua_tostring(tolua_S,2,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'openCurrentFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->openCurrentFile(password);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'openCurrentFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: closeCurrentFile of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_closeCurrentFile00
static int tolua_libSLTK_core_Sltk_ZipArchiver_closeCurrentFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipArchiver* self = (Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closeCurrentFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->closeCurrentFile();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'closeCurrentFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentFilePosition of class  Sltk::ZipArchiver */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFilePosition00
static int tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFilePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::ZipArchiver",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::ZipArchiver* self = (const Sltk::ZipArchiver*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentFilePosition'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getCurrentFilePosition();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentFilePosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::removeZipData */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_removeZipData00
static int tolua_libSLTK_core_Sltk_removeZipData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  Sltk::removeZipData(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeZipData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::compressDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_compressDirectory00
static int tolua_libSLTK_core_Sltk_compressDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* dirPath = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* outputFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,3,""));
  unsigned char level = (( unsigned char)  tolua_tonumber(tolua_S,4,6));
  const char* mode = ((const char*)  tolua_tostring(tolua_S,5,"w"));
  const char* rootDir = ((const char*)  tolua_tostring(tolua_S,6,""));
  {
   bool tolua_ret = (bool)  Sltk::compressDirectory(dirPath,outputFile,key,level,mode,rootDir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'compressDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Sltk::uncompressDirectory */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_uncompressDirectory00
static int tolua_libSLTK_core_Sltk_uncompressDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* zipFile = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* dirPath = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,3,""));
  {
   bool tolua_ret = (bool)  Sltk::uncompressDirectory(zipFile,dirPath,key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'uncompressDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_new00
static int tolua_libSLTK_core_Sltk_ZipFileReader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipFileReader* tolua_ret = (Sltk::ZipFileReader*)  Mtolua_new((Sltk::ZipFileReader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileReader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_new00_local
static int tolua_libSLTK_core_Sltk_ZipFileReader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::ZipFileReader* tolua_ret = (Sltk::ZipFileReader*)  Mtolua_new((Sltk::ZipFileReader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileReader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_new01
static int tolua_libSLTK_core_Sltk_ZipFileReader_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* arcname = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
  {
   Sltk::ZipFileReader* tolua_ret = (Sltk::ZipFileReader*)  Mtolua_new((Sltk::ZipFileReader)(arcname,filename,password));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileReader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_ZipFileReader_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_new01_local
static int tolua_libSLTK_core_Sltk_ZipFileReader_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* arcname = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
  {
   Sltk::ZipFileReader* tolua_ret = (Sltk::ZipFileReader*)  Mtolua_new((Sltk::ZipFileReader)(arcname,filename,password));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::ZipFileReader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_ZipFileReader_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_delete00
static int tolua_libSLTK_core_Sltk_ZipFileReader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPassword of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_setPassword00
static int tolua_libSLTK_core_Sltk_ZipFileReader_setPassword00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* pass = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPassword'", NULL);
#endif
  {
   self->setPassword(pass);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPassword'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_open00
static int tolua_libSLTK_core_Sltk_ZipFileReader_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* arcname = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(arcname,filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_close00
static int tolua_libSLTK_core_Sltk_ZipFileReader_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_getSize00
static int tolua_libSLTK_core_Sltk_ZipFileReader_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readLine of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_readLine00
static int tolua_libSLTK_core_Sltk_ZipFileReader_readLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readLine'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readLine();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readChar of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_readChar00
static int tolua_libSLTK_core_Sltk_ZipFileReader_readChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readChar'", NULL);
#endif
  {
    char tolua_ret = (  char)  self->readChar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readAll of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_readAll00
static int tolua_libSLTK_core_Sltk_ZipFileReader_readAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readAll'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readAll();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seek of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_seek00
static int tolua_libSLTK_core_Sltk_ZipFileReader_seek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
   long move = ((  long)  tolua_tonumber(tolua_S,2,0));
  unsigned char from = (( unsigned char)  tolua_tonumber(tolua_S,3,SEEK_SET));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seek'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->seek(move,from);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Sltk::ZipFileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_ZipFileReader_getPosition00
static int tolua_libSLTK_core_Sltk_ZipFileReader_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::ZipFileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::ZipFileReader* self = (Sltk::ZipFileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getPosition();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_new00
static int tolua_libSLTK_core_Sltk_FileReader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::FileReader* tolua_ret = (Sltk::FileReader*)  Mtolua_new((Sltk::FileReader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileReader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_new00_local
static int tolua_libSLTK_core_Sltk_FileReader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Sltk::FileReader* tolua_ret = (Sltk::FileReader*)  Mtolua_new((Sltk::FileReader)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileReader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_new01
static int tolua_libSLTK_core_Sltk_FileReader_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* ext = ((const char*)  tolua_tostring(tolua_S,3,""));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
  {
   Sltk::FileReader* tolua_ret = (Sltk::FileReader*)  Mtolua_new((Sltk::FileReader)(filename,ext,password));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileReader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_FileReader_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_new01_local
static int tolua_libSLTK_core_Sltk_FileReader_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* ext = ((const char*)  tolua_tostring(tolua_S,3,""));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
  {
   Sltk::FileReader* tolua_ret = (Sltk::FileReader*)  Mtolua_new((Sltk::FileReader)(filename,ext,password));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Sltk::FileReader");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_FileReader_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_delete00
static int tolua_libSLTK_core_Sltk_FileReader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultArchive of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive00
static int tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultArchive'", NULL);
#endif
  {
   self->setDefaultArchive(path,key);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultArchive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultArchive of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive01
static int tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
  const Sltk::FileReader* file = ((const Sltk::FileReader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultArchive'", NULL);
#endif
  {
   self->setDefaultArchive(file);
  }
 }
 return 0;
tolua_lerror:
 return tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_open00
static int tolua_libSLTK_core_Sltk_FileReader_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* ext = ((const char*)  tolua_tostring(tolua_S,3,""));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(filename,ext,password);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: openFile of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_openFile00
static int tolua_libSLTK_core_Sltk_FileReader_openFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'openFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->openFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'openFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: openFileInZip of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_openFileInZip00
static int tolua_libSLTK_core_Sltk_FileReader_openFileInZip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
  const char* arcname = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* password = ((const char*)  tolua_tostring(tolua_S,4,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'openFileInZip'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->openFileInZip(arcname,filename,password);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'openFileInZip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_close00
static int tolua_libSLTK_core_Sltk_FileReader_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentFilePath of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_getCurrentFilePath00
static int tolua_libSLTK_core_Sltk_FileReader_getCurrentFilePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Sltk::FileReader* self = (const Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentFilePath'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getCurrentFilePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentFilePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_getSize00
static int tolua_libSLTK_core_Sltk_FileReader_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readLine of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_readLine00
static int tolua_libSLTK_core_Sltk_FileReader_readLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readLine'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readLine();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readChar of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_readChar00
static int tolua_libSLTK_core_Sltk_FileReader_readChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readChar'", NULL);
#endif
  {
    char tolua_ret = (  char)  self->readChar();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readAll of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_readAll00
static int tolua_libSLTK_core_Sltk_FileReader_readAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readAll'", NULL);
#endif
  {
   string tolua_ret = (string)  self->readAll();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seek of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_seek00
static int tolua_libSLTK_core_Sltk_FileReader_seek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
   long move = ((  long)  tolua_tonumber(tolua_S,2,0));
  unsigned char from = (( unsigned char)  tolua_tonumber(tolua_S,3,SEEK_SET));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seek'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->seek(move,from);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  Sltk::FileReader */
#ifndef TOLUA_DISABLE_tolua_libSLTK_core_Sltk_FileReader_getPosition00
static int tolua_libSLTK_core_Sltk_FileReader_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Sltk::FileReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Sltk::FileReader* self = (Sltk::FileReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getPosition();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libSLTK_core_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"SEEK_SET",SEEK_SET);
  tolua_constant(tolua_S,"SEEK_CUR",SEEK_CUR);
  tolua_constant(tolua_S,"SEEK_END",SEEK_END);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_function(tolua_S,"isSameString",tolua_libSLTK_core_Sltk_isSameString00);
   tolua_function(tolua_S,"isSameString",tolua_libSLTK_core_Sltk_isSameString01);
   tolua_module(tolua_S,"Encoding",0);
   tolua_beginmodule(tolua_S,"Encoding");
    tolua_constant(tolua_S,"UNKNOWN",Sltk::Encoding::UNKNOWN);
    tolua_constant(tolua_S,"BINARY",Sltk::Encoding::BINARY);
    tolua_constant(tolua_S,"ANSI",Sltk::Encoding::ANSI);
    tolua_constant(tolua_S,"SJIS",Sltk::Encoding::SJIS);
    tolua_constant(tolua_S,"JIS",Sltk::Encoding::JIS);
    tolua_constant(tolua_S,"EUC",Sltk::Encoding::EUC);
    tolua_constant(tolua_S,"ISO2022JP",Sltk::Encoding::ISO2022JP);
    tolua_constant(tolua_S,"UTF8",Sltk::Encoding::UTF8);
    tolua_constant(tolua_S,"UTF16BE",Sltk::Encoding::UTF16BE);
    tolua_constant(tolua_S,"UTF16LE",Sltk::Encoding::UTF16LE);
    tolua_constant(tolua_S,"UTF32BE",Sltk::Encoding::UTF32BE);
    tolua_constant(tolua_S,"UTF32LE",Sltk::Encoding::UTF32LE);
    tolua_function(tolua_S,"getName",tolua_libSLTK_core_Sltk_Encoding_getName00);
    tolua_function(tolua_S,"isUTF8",tolua_libSLTK_core_Sltk_Encoding_isUTF800);
    tolua_function(tolua_S,"encode",tolua_libSLTK_core_Sltk_Encoding_encode00);
    tolua_function(tolua_S,"toUTF8",tolua_libSLTK_core_Sltk_Encoding_toUTF800);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Console",0);
   tolua_beginmodule(tolua_S,"Console");
    tolua_function(tolua_S,"writeLine",tolua_libSLTK_core_Sltk_Console_writeLine00);
    tolua_function(tolua_S,"write",tolua_libSLTK_core_Sltk_Console_write00);
    tolua_constant(tolua_S,"BLACK",Sltk::Console::BLACK);
    tolua_constant(tolua_S,"BLUE",Sltk::Console::BLUE);
    tolua_constant(tolua_S,"GREEN",Sltk::Console::GREEN);
    tolua_constant(tolua_S,"CYAN",Sltk::Console::CYAN);
    tolua_constant(tolua_S,"RED",Sltk::Console::RED);
    tolua_constant(tolua_S,"PURPLE",Sltk::Console::PURPLE);
    tolua_constant(tolua_S,"YELLOW",Sltk::Console::YELLOW);
    tolua_constant(tolua_S,"WHITE",Sltk::Console::WHITE);
    tolua_function(tolua_S,"setAttribute",tolua_libSLTK_core_Sltk_Console_setAttribute00);
    tolua_function(tolua_S,"setCursorPosition",tolua_libSLTK_core_Sltk_Console_setCursorPosition00);
    tolua_function(tolua_S,"clear",tolua_libSLTK_core_Sltk_Console_clear00);
    tolua_function(tolua_S,"isKeyPressed",tolua_libSLTK_core_Sltk_Console_isKeyPressed00);
    tolua_function(tolua_S,"getPressedKey",tolua_libSLTK_core_Sltk_Console_getPressedKey00);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"System",0);
   tolua_beginmodule(tolua_S,"System");
    tolua_function(tolua_S,"execute",tolua_libSLTK_core_Sltk_System_execute00);
    tolua_function(tolua_S,"sleep",tolua_libSLTK_core_Sltk_System_sleep00);
    tolua_function(tolua_S,"getTime",tolua_libSLTK_core_Sltk_System_getTime00);
    tolua_function(tolua_S,"setEnvironmentVariable",tolua_libSLTK_core_Sltk_System_setEnvironmentVariable00);
    tolua_function(tolua_S,"getEnvironmentVariable",tolua_libSLTK_core_Sltk_System_getEnvironmentVariable00);
    tolua_function(tolua_S,"setCurrentDirectory",tolua_libSLTK_core_Sltk_System_setCurrentDirectory00);
    tolua_function(tolua_S,"getCurrentDirectory",tolua_libSLTK_core_Sltk_System_getCurrentDirectory00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Object","Sltk::Object","",NULL);
   tolua_beginmodule(tolua_S,"Object");
    tolua_constant(tolua_S,"NONE",Sltk::Object::NONE);
    tolua_constant(tolua_S,"ACTIVE",Sltk::Object::ACTIVE);
    tolua_constant(tolua_S,"FAILED",Sltk::Object::FAILED);
    tolua_constant(tolua_S,"FINISHED",Sltk::Object::FINISHED);
    tolua_constant(tolua_S,"BUSY",Sltk::Object::BUSY);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"getState",tolua_libSLTK_core_Sltk_getState00);
   tolua_function(tolua_S,"getMessage",tolua_libSLTK_core_Sltk_getMessage00);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"LibraryLoader","Sltk::LibraryLoader","Sltk::Object",tolua_collect_Sltk__LibraryLoader);
   #else
   tolua_cclass(tolua_S,"LibraryLoader","Sltk::LibraryLoader","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"LibraryLoader");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_LibraryLoader_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_LibraryLoader_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_LibraryLoader_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_LibraryLoader_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_LibraryLoader_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_LibraryLoader_new01_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_LibraryLoader_delete00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_LibraryLoader_open00);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_LibraryLoader_close00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Randomizer","Sltk::Randomizer","Sltk::Object",tolua_collect_Sltk__Randomizer);
   #else
   tolua_cclass(tolua_S,"Randomizer","Sltk::Randomizer","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Randomizer");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_Randomizer_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_Randomizer_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_Randomizer_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_Randomizer_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_Randomizer_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_Randomizer_new01_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_Randomizer_new02);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_Randomizer_new02_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_Randomizer_new02_local);
    tolua_function(tolua_S,"seed",tolua_libSLTK_core_Sltk_Randomizer_seed00);
    tolua_function(tolua_S,"seed",tolua_libSLTK_core_Sltk_Randomizer_seed01);
    tolua_function(tolua_S,"get",tolua_libSLTK_core_Sltk_Randomizer_get00);
    tolua_function(tolua_S,"get",tolua_libSLTK_core_Sltk_Randomizer_get01);
    tolua_function(tolua_S,"get",tolua_libSLTK_core_Sltk_Randomizer_get02);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Engine",0);
   tolua_beginmodule(tolua_S,"Engine");
    tolua_function(tolua_S,"encodeDirectory",tolua_libSLTK_core_Sltk_Engine_encodeDirectory00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   tolua_module(tolua_S,"Path",0);
   tolua_beginmodule(tolua_S,"Path");
    tolua_function(tolua_S,"getLeaf",tolua_libSLTK_core_Sltk_Path_getLeaf00);
    tolua_function(tolua_S,"getStem",tolua_libSLTK_core_Sltk_Path_getStem00);
    tolua_function(tolua_S,"getExtension",tolua_libSLTK_core_Sltk_Path_getExtension00);
    tolua_function(tolua_S,"convert",tolua_libSLTK_core_Sltk_Path_convert00);
    tolua_function(tolua_S,"isSame",tolua_libSLTK_core_Sltk_Path_isSame00);
    tolua_function(tolua_S,"isSame",tolua_libSLTK_core_Sltk_Path_isSame01);
    tolua_function(tolua_S,"getParent",tolua_libSLTK_core_Sltk_Path_getParent00);
    tolua_function(tolua_S,"isFile",tolua_libSLTK_core_Sltk_Path_isFile00);
    tolua_function(tolua_S,"isDirectory",tolua_libSLTK_core_Sltk_Path_isDirectory00);
    tolua_function(tolua_S,"complete",tolua_libSLTK_core_Sltk_Path_complete00);
    tolua_function(tolua_S,"appendSlash",tolua_libSLTK_core_Sltk_Path_appendSlash00);
    tolua_function(tolua_S,"removeSlash",tolua_libSLTK_core_Sltk_Path_removeSlash00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"File","Sltk::File","Sltk::Object",tolua_collect_Sltk__File);
   #else
   tolua_cclass(tolua_S,"File","Sltk::File","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"File");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_File_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_File_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_File_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_File_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_File_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_File_new01_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_File_new02);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_File_new02_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_File_new02_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_File_delete00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_File_open00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_File_open01);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_File_close00);
    tolua_function(tolua_S,"getSize",tolua_libSLTK_core_Sltk_File_getSize00);
    tolua_function(tolua_S,"readLine",tolua_libSLTK_core_Sltk_File_readLine00);
    tolua_function(tolua_S,"readChar",tolua_libSLTK_core_Sltk_File_readChar00);
    tolua_function(tolua_S,"writeLine",tolua_libSLTK_core_Sltk_File_writeLine00);
    tolua_function(tolua_S,"writeChar",tolua_libSLTK_core_Sltk_File_writeChar00);
    tolua_function(tolua_S,"readAll",tolua_libSLTK_core_Sltk_File_readAll00);
    tolua_function(tolua_S,"seek",tolua_libSLTK_core_Sltk_File_seek00);
    tolua_function(tolua_S,"getPosition",tolua_libSLTK_core_Sltk_File_getPosition00);
    tolua_function(tolua_S,"flush",tolua_libSLTK_core_Sltk_File_flush00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"FileEnumerator","Sltk::FileEnumerator","Sltk::Object",tolua_collect_Sltk__FileEnumerator);
   #else
   tolua_cclass(tolua_S,"FileEnumerator","Sltk::FileEnumerator","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"FileEnumerator");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_FileEnumerator_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_FileEnumerator_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_FileEnumerator_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_FileEnumerator_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_FileEnumerator_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_FileEnumerator_new01_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_FileEnumerator_delete00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_FileEnumerator_open00);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_FileEnumerator_close00);
    tolua_function(tolua_S,"toNext",tolua_libSLTK_core_Sltk_FileEnumerator_toNext00);
    tolua_function(tolua_S,"getName",tolua_libSLTK_core_Sltk_FileEnumerator_getName00);
    tolua_function(tolua_S,"getPath",tolua_libSLTK_core_Sltk_FileEnumerator_getPath00);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"copyFile",tolua_libSLTK_core_Sltk_copyFile00);
   tolua_function(tolua_S,"removeFile",tolua_libSLTK_core_Sltk_removeFile00);
   tolua_function(tolua_S,"moveFile",tolua_libSLTK_core_Sltk_moveFile00);
   tolua_function(tolua_S,"createDirectory",tolua_libSLTK_core_Sltk_createDirectory00);
   tolua_function(tolua_S,"copyDirectory",tolua_libSLTK_core_Sltk_copyDirectory00);
   tolua_function(tolua_S,"removeDirectory",tolua_libSLTK_core_Sltk_removeDirectory00);
   tolua_function(tolua_S,"moveDirectory",tolua_libSLTK_core_Sltk_moveDirectory00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Sltk",0);
  tolua_beginmodule(tolua_S,"Sltk");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ZipGlobalInformation","Sltk::ZipGlobalInformation","",tolua_collect_Sltk__ZipGlobalInformation);
   #else
   tolua_cclass(tolua_S,"ZipGlobalInformation","Sltk::ZipGlobalInformation","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ZipGlobalInformation");
    tolua_variable(tolua_S,"entries",tolua_get_Sltk__ZipGlobalInformation_unsigned_entries,tolua_set_Sltk__ZipGlobalInformation_unsigned_entries);
    tolua_variable(tolua_S,"commentSize",tolua_get_Sltk__ZipGlobalInformation_unsigned_commentSize,tolua_set_Sltk__ZipGlobalInformation_unsigned_commentSize);
    tolua_variable(tolua_S,"comment",tolua_get_Sltk__ZipGlobalInformation_comment,tolua_set_Sltk__ZipGlobalInformation_comment);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipGlobalInformation_new00_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ZipFileInformation","Sltk::ZipFileInformation","",tolua_collect_Sltk__ZipFileInformation);
   #else
   tolua_cclass(tolua_S,"ZipFileInformation","Sltk::ZipFileInformation","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ZipFileInformation");
    tolua_variable(tolua_S,"version",tolua_get_Sltk__ZipFileInformation_unsigned_version,tolua_set_Sltk__ZipFileInformation_unsigned_version);
    tolua_variable(tolua_S,"neededVersion",tolua_get_Sltk__ZipFileInformation_unsigned_neededVersion,tolua_set_Sltk__ZipFileInformation_unsigned_neededVersion);
    tolua_variable(tolua_S,"flag",tolua_get_Sltk__ZipFileInformation_unsigned_flag,tolua_set_Sltk__ZipFileInformation_unsigned_flag);
    tolua_variable(tolua_S,"compressionMethod",tolua_get_Sltk__ZipFileInformation_unsigned_compressionMethod,tolua_set_Sltk__ZipFileInformation_unsigned_compressionMethod);
    tolua_variable(tolua_S,"dosDate",tolua_get_Sltk__ZipFileInformation_unsigned_dosDate,tolua_set_Sltk__ZipFileInformation_unsigned_dosDate);
    tolua_variable(tolua_S,"crc",tolua_get_Sltk__ZipFileInformation_unsigned_crc,tolua_set_Sltk__ZipFileInformation_unsigned_crc);
    tolua_variable(tolua_S,"compressedSize",tolua_get_Sltk__ZipFileInformation_unsigned_compressedSize,tolua_set_Sltk__ZipFileInformation_unsigned_compressedSize);
    tolua_variable(tolua_S,"uncompressedSize",tolua_get_Sltk__ZipFileInformation_unsigned_uncompressedSize,tolua_set_Sltk__ZipFileInformation_unsigned_uncompressedSize);
    tolua_variable(tolua_S,"fileNameSize",tolua_get_Sltk__ZipFileInformation_unsigned_fileNameSize,tolua_set_Sltk__ZipFileInformation_unsigned_fileNameSize);
    tolua_variable(tolua_S,"fileExtraSize",tolua_get_Sltk__ZipFileInformation_unsigned_fileExtraSize,tolua_set_Sltk__ZipFileInformation_unsigned_fileExtraSize);
    tolua_variable(tolua_S,"fileCommentSize",tolua_get_Sltk__ZipFileInformation_unsigned_fileCommentSize,tolua_set_Sltk__ZipFileInformation_unsigned_fileCommentSize);
    tolua_variable(tolua_S,"diskNumStart",tolua_get_Sltk__ZipFileInformation_unsigned_diskNumStart,tolua_set_Sltk__ZipFileInformation_unsigned_diskNumStart);
    tolua_variable(tolua_S,"internalFA",tolua_get_Sltk__ZipFileInformation_unsigned_internalFA,tolua_set_Sltk__ZipFileInformation_unsigned_internalFA);
    tolua_variable(tolua_S,"externalFA",tolua_get_Sltk__ZipFileInformation_unsigned_externalFA,tolua_set_Sltk__ZipFileInformation_unsigned_externalFA);
    tolua_cclass(tolua_S,"_DateTime","Sltk::ZipFileInformation::_DateTime","",NULL);
    tolua_beginmodule(tolua_S,"_DateTime");
     tolua_variable(tolua_S,"sec",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_sec,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_sec);
     tolua_variable(tolua_S,"min",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_min,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_min);
     tolua_variable(tolua_S,"hour",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_hour,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_hour);
     tolua_variable(tolua_S,"day",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_day,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_day);
     tolua_variable(tolua_S,"month",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_month,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_month);
     tolua_variable(tolua_S,"year",tolua_get_Sltk__ZipFileInformation___DateTime_unsigned_year,tolua_set_Sltk__ZipFileInformation___DateTime_unsigned_year);
    tolua_endmodule(tolua_S);
    tolua_variable(tolua_S,"date",tolua_get_Sltk__ZipFileInformation_date,tolua_set_Sltk__ZipFileInformation_date);
    tolua_variable(tolua_S,"fileName",tolua_get_Sltk__ZipFileInformation_fileName,tolua_set_Sltk__ZipFileInformation_fileName);
    tolua_variable(tolua_S,"comment",tolua_get_Sltk__ZipFileInformation_comment,tolua_set_Sltk__ZipFileInformation_comment);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipFileInformation_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipFileInformation_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipFileInformation_new00_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ZipArchiver","Sltk::ZipArchiver","Sltk::Object",tolua_collect_Sltk__ZipArchiver);
   #else
   tolua_cclass(tolua_S,"ZipArchiver","Sltk::ZipArchiver","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ZipArchiver");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipArchiver_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipArchiver_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipArchiver_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipArchiver_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipArchiver_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipArchiver_new01_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_ZipArchiver_delete00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_ZipArchiver_open00);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_ZipArchiver_close00);
    tolua_function(tolua_S,"appendFile",tolua_libSLTK_core_Sltk_ZipArchiver_appendFile00);
    tolua_function(tolua_S,"getGlobalInformation",tolua_libSLTK_core_Sltk_ZipArchiver_getGlobalInformation00);
    tolua_function(tolua_S,"getSize",tolua_libSLTK_core_Sltk_ZipArchiver_getSize00);
    tolua_function(tolua_S,"toFirstFile",tolua_libSLTK_core_Sltk_ZipArchiver_toFirstFile00);
    tolua_function(tolua_S,"toNextFile",tolua_libSLTK_core_Sltk_ZipArchiver_toNextFile00);
    tolua_function(tolua_S,"locateFile",tolua_libSLTK_core_Sltk_ZipArchiver_locateFile00);
    tolua_function(tolua_S,"getCurrentFileInformation",tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFileInformation00);
    tolua_function(tolua_S,"getCurrentOffset",tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentOffset00);
    tolua_function(tolua_S,"openCurrentFile",tolua_libSLTK_core_Sltk_ZipArchiver_openCurrentFile00);
    tolua_function(tolua_S,"closeCurrentFile",tolua_libSLTK_core_Sltk_ZipArchiver_closeCurrentFile00);
    tolua_function(tolua_S,"getCurrentFilePosition",tolua_libSLTK_core_Sltk_ZipArchiver_getCurrentFilePosition00);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"removeZipData",tolua_libSLTK_core_Sltk_removeZipData00);
   tolua_function(tolua_S,"compressDirectory",tolua_libSLTK_core_Sltk_compressDirectory00);
   tolua_function(tolua_S,"uncompressDirectory",tolua_libSLTK_core_Sltk_uncompressDirectory00);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ZipFileReader","Sltk::ZipFileReader","Sltk::Object",tolua_collect_Sltk__ZipFileReader);
   #else
   tolua_cclass(tolua_S,"ZipFileReader","Sltk::ZipFileReader","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ZipFileReader");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipFileReader_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipFileReader_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipFileReader_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_ZipFileReader_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_ZipFileReader_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_ZipFileReader_new01_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_ZipFileReader_delete00);
    tolua_function(tolua_S,"setPassword",tolua_libSLTK_core_Sltk_ZipFileReader_setPassword00);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_ZipFileReader_open00);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_ZipFileReader_close00);
    tolua_function(tolua_S,"getSize",tolua_libSLTK_core_Sltk_ZipFileReader_getSize00);
    tolua_function(tolua_S,"readLine",tolua_libSLTK_core_Sltk_ZipFileReader_readLine00);
    tolua_function(tolua_S,"readChar",tolua_libSLTK_core_Sltk_ZipFileReader_readChar00);
    tolua_function(tolua_S,"readAll",tolua_libSLTK_core_Sltk_ZipFileReader_readAll00);
    tolua_function(tolua_S,"seek",tolua_libSLTK_core_Sltk_ZipFileReader_seek00);
    tolua_function(tolua_S,"getPosition",tolua_libSLTK_core_Sltk_ZipFileReader_getPosition00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"FileReader","Sltk::FileReader","Sltk::Object",tolua_collect_Sltk__FileReader);
   #else
   tolua_cclass(tolua_S,"FileReader","Sltk::FileReader","Sltk::Object",NULL);
   #endif
   tolua_beginmodule(tolua_S,"FileReader");
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_FileReader_new00);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_FileReader_new00_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_FileReader_new00_local);
    tolua_function(tolua_S,"new",tolua_libSLTK_core_Sltk_FileReader_new01);
    tolua_function(tolua_S,"new_local",tolua_libSLTK_core_Sltk_FileReader_new01_local);
    tolua_function(tolua_S,".call",tolua_libSLTK_core_Sltk_FileReader_new01_local);
    tolua_function(tolua_S,"delete",tolua_libSLTK_core_Sltk_FileReader_delete00);
    tolua_function(tolua_S,"setDefaultArchive",tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive00);
    tolua_function(tolua_S,"setDefaultArchive",tolua_libSLTK_core_Sltk_FileReader_setDefaultArchive01);
    tolua_function(tolua_S,"open",tolua_libSLTK_core_Sltk_FileReader_open00);
    tolua_function(tolua_S,"openFile",tolua_libSLTK_core_Sltk_FileReader_openFile00);
    tolua_function(tolua_S,"openFileInZip",tolua_libSLTK_core_Sltk_FileReader_openFileInZip00);
    tolua_function(tolua_S,"close",tolua_libSLTK_core_Sltk_FileReader_close00);
    tolua_function(tolua_S,"getCurrentFilePath",tolua_libSLTK_core_Sltk_FileReader_getCurrentFilePath00);
    tolua_function(tolua_S,"getSize",tolua_libSLTK_core_Sltk_FileReader_getSize00);
    tolua_function(tolua_S,"readLine",tolua_libSLTK_core_Sltk_FileReader_readLine00);
    tolua_function(tolua_S,"readChar",tolua_libSLTK_core_Sltk_FileReader_readChar00);
    tolua_function(tolua_S,"readAll",tolua_libSLTK_core_Sltk_FileReader_readAll00);
    tolua_function(tolua_S,"seek",tolua_libSLTK_core_Sltk_FileReader_seek00);
    tolua_function(tolua_S,"getPosition",tolua_libSLTK_core_Sltk_FileReader_getPosition00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libSLTK_core (lua_State* tolua_S) {
 return tolua_libSLTK_core_open(tolua_S);
};
#endif

