#include <Keyboard.h>
#define KEY_MENU 0xED
void setup() {
 Serial.begin(9600);
}

void loop() {

 int valueA0=get_keypad_1();
 if(valueA0>0) { 
   Serial.print("Click button 1 ");
   Serial.println(valueA0);
   delay(400);
 }
}

int get_keypad_1() {
 int val=analogRead(A0);
 if(val<30){
  Keyboard.press(0xF0);
  delay(40);
  Keyboard.releaseAll();
 return 1;
 }
 else if(val<90){
  Keyboard.press(0xF1);
  delay(40);
  Keyboard.releaseAll();
 return 2;
 }
 else if(val<160){
  Keyboard.press(0xF2);
  delay(40);
  Keyboard.releaseAll();
 return 3;
 }
 else if(val<220){
  Keyboard.press(0xF3);
  delay(40);
  Keyboard.releaseAll();
 return 4;
 }
 else if(val<280){
  Keyboard.press(0xF4);
  delay(40);
  Keyboard.releaseAll();
 return 5;
 }
 else if(val<350){
 Keyboard.press(0xF5);
  delay(40);
  Keyboard.releaseAll();
 return 6;
 }
 else if(val<410){
  Keyboard.press(0xF6);
  delay(40);
  Keyboard.releaseAll();
 return 7;
 }
 else if(val<480){
  Keyboard.press(0xF7);
  delay(40);
  Keyboard.releaseAll();
 return 8;
 }
 else if(val<540){
  Keyboard.press(0xF8);
  delay(40);
  Keyboard.releaseAll();
 return 9;
 }
 else if(val<605){
  Keyboard.press(0xF9);
  delay(40);
  Keyboard.releaseAll();
 return 10;
 }
 else if(val<670){
 Keyboard.press(0xFA);
  delay(40);
  Keyboard.releaseAll();
 return 11;
 }
 else if(val<730){
  Keyboard.press(0xFB);
  delay(40);
  Keyboard.releaseAll();
 return 12;
 }
 else if(val<800){
  Keyboard.press(0x80);
  Keyboard.press(0xC3);
  delay(40);
  Keyboard.releaseAll();
 return 13;
 }
 else if(val<860){
  Keyboard.press(0x80);
  Keyboard.press(0x65);
  delay(40);
  Keyboard.releaseAll();
 return 14;
 }
 else if(val<930){
  Keyboard.press(0x80);
  Keyboard.press(0xC4);
  delay(40);
  Keyboard.releaseAll();
 return 15;
 }
 else if(val<990){
  Keyboard.press(0x80);
  Keyboard.press(0xC6);
  delay(40);
  Keyboard.releaseAll();
 return 16;
 }
 else
   return 0; 
}
