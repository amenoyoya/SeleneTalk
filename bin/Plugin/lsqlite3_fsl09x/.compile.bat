@call ..\..\..\..\vcvars.bat
%compile% *.c
@pause

%create_dll% /out:"lsqlite3.dll" *.obj lua51.lib
@pause

del *.obj
