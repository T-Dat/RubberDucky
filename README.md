# RubberDucky
The RubberDucky is a SoC that creates a persistent backdoor onto the victim's machine (Windows). The attacker only needs to plug in the SoC into a logged in device and the attack will be performed within 10 seconds. The attack uses a Digispark ATTINY85 board. To setup the Rubberducky, first upload the files in the "Downloads" folder to a web server or a file hosting service such as Dropbox or Google Drive. The code can be opened using the Arduino IDE. In the code RubberDucky.ino replace "REPLACE with download link" by the download link of the respective file. 


The attack is by default on WAN. For the attack to work, the attacker needs to enable port forwarding in his router with port 10010. On the attacker machine, run the command "nc -lp 10010". 


To do an attack on LAN, uncomment the respective line in RubberDucky.ino. On the attacker machine, run the command "nc VICTIMIP 10010". The victim Ip can be found using nmap. Look for hosts with port 10010 open. 


The attack will grant access to the victim's command line. The connection will be reopened if the victim restarts his machine. 

The RubberDucky only executes the attack once. To reset, upload the code reset_EEPROM.ino and wait until "reset" is typed on screen. Then upload RubberDucky.ino again.
