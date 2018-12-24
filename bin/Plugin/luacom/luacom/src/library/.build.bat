@call ..\..\..\..\..\..\..\vcvars.bat

@set include=%~dp0;..\..\include;%include%

..\..\..\..\..\SeleneTalk.exe .compile.sltk
@pause

%compile% *.cpp
@pause

@lib.exe /OUT:"luacom_s.lib" /NOLOGO *.obj
@pause

@del *.obj