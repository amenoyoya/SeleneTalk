@if not defined compile call ..\vcvars.bat

@cd core
@%compile% /wd4005 /wd4309 *.cpp
@lib.exe /OUT:"libsltk3_core.lib" /NOLOGO *.obj
@del *.obj
@move libsltk3_core.lib ..\..\lib\win32\libsltk3_core.lib