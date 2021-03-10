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
 if(val>1000){
  Keyboard.press(0xF0);
  delay(40);
  Keyboard.release(0xF0);
 return 1;
 }
 else if(val>900){
  Keyboard.press(0xF1);
  delay(40);
  Keyboard.release(0xF1);
 return 2;
 }
 else if(val>820){
  Keyboard.press(0xF2);
  delay(40);
  Keyboard.release(0xF2);
 return 3;
 }
 else if(val>750){
  Keyboard.press(0xF3);
  delay(40);
  Keyboard.release(0xF3);
 return 4;
 }
 else if(val>710){
  Keyboard.press(0xF4);
  delay(40);
  Keyboard.release(0xF4);
 return 5;
 }
 else if(val>660){
  Keyboard.press(0xF5);
  delay(40);
  Keyboard.release(0xF5);
 return 6;
 }
 else if(val>620){
  Keyboard.press(0xF6);
  delay(40);
  Keyboard.release(0xF6);
 return 7;
 }
 else if(val>585){
  Keyboard.press(0xF7);
  delay(40);
  Keyboard.release(0xF7);
 return 8;
 }
 else if(val>555){
  Keyboard.press(0xF8);
  delay(40);
  Keyboard.release(0xF8);
 return 9;
 }
 else if(val>525){
  Keyboard.press(0xF9);
  delay(40);
  Keyboard.release(0xF9);
 return 10;
 }
 else if(val>495){
  Keyboard.press(0xFA);
  delay(40);
  Keyboard.release(0xFA);
 return 11;
 }
 else if(val>475){
  Keyboard.press(0xFB);
  delay(40);
  Keyboard.release(0xFB);
 return 12;
 }
 else
   return 0; 
}
