@call ..\..\..\..\vcvars.bat

@set include=%~dp0luacom\include;%include%
@set lib=%~dp0luacom\src\library;%lib%

%compile% /wd4005 /wd4800 luacom.cpp
@pause

%create_dll% /OUT:"luacom.dll" /NOLOGO luacom.obj
@pause

@del luacom.obj luacom.lib luacom.exp