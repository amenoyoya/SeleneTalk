@if not defined compile call ..\vcvars.bat

@cd zlib
@%compile% /wd4005 *.cpp
@lib.exe /OUT:"libsltk3_zlib.lib" /NOLOGO *.obj
@del *.obj
@move libsltk3_zlib.lib ..\..\lib\win32\libsltk3_zlib.lib