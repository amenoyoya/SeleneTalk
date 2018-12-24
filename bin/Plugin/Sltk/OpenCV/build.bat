@call ..\..\..\..\..\vcvars.bat

@set include=..\..\..\..\..\src\test\opencv_2.4.9\build\include;%include%
@set lib=..\..\..\..\..\src\test\opencv_2.4.9\\build\x86\vc10\staticlib;%lib%

@%compile% OpenCV.cpp
@pause
@link.exe /ERRORREPORT:NONE /NOLOGO /DLL /MACHINE:X86 OpenCV.obj libsltk3_engine.lib libsltk3_engine_win32.lib libsltk3_win32.lib libsltk3_zlib.lib libsltk3_core.lib tolua++.lib lua51.lib zlib.lib
@pause
@del *.lib *.obj *.exp