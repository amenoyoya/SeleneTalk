@call ..\..\..\..\..\vcvars.bat

@cd tolua
@call ..\..\..\..\..\..\tolua++.bat libSLTK_win32 module_win32
@pause

@cd ..
%compile% /wd4005 /wd4800 *.cpp
@pause

%create_dll% /OUT:"Win32.dll" /NOLOGO *.obj libsltk3_engine.lib libsltk3_engine_win32.lib libsltk3_win32.lib libsltk3_zlib.lib libsltk3_core.lib tolua++.lib lua51.lib zlib.lib
@pause

@del *.obj *.lib *.exp