@if not defined compile call ..\vcvars.bat

@cd engine\tolua
@tolua++ -n libSLTK_core -o module_core.cpp -H module_core.h module_core.pkg
@tolua++ -n libSLTK_win32 -o module_win32.cpp -H module_win32.h module_win32.pkg

@cd ..\corelib
@luajit .compile.sltk

@cd ..
@%compile% /wd4005 /wd4244 /wd4800 core.cpp main.cpp win32.cpp
@lib.exe /OUT:"libsltk3_engine.lib" /NOLOGO core.obj main.obj
@lib.exe /OUT:"libsltk3_engine_win32.lib" /NOLOGO win32.obj
@del *.obj
@move libsltk3_engine.lib ..\..\lib\win32\libsltk3_engine.lib
@move libsltk3_engine_win32.lib ..\..\lib\win32\libsltk3_engine_win32.lib