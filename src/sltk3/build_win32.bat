@if not defined compile call ..\vcvars.bat

@cd win32
@%compile% /wd4005 *.cpp
@lib.exe /OUT:"libsltk3_win32.lib" /NOLOGO *.obj
@del *.obj
@move libsltk3_win32.lib ..\..\lib\win32\libsltk3_win32.lib