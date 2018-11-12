#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}

void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("/Applications/Microsoft Outlook.app");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_GUI_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("your@email.com");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.print("Lunch is on me!");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.print("I'm feeling generous so I'll be buying everyone lunch for a week.");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_ENTER);
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(10000);
}
