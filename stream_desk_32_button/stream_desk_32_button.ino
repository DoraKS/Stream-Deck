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
 int valueA1=get_keypad_2();
 if(valueA1>0) { 
   Serial.print("Click button 2 ");
   Serial.println(valueA1);
   delay(400);
 }
 
}


int get_keypad_1() {
 int val=analogRead(A0);
 if(val>1000){
  Keyboard.press(0xF0);
  delay(40);
  Keyboard.releaseAll();
 return 1;
 }
 else if(val>900){
  Keyboard.press(0xF1);
  delay(40);
  Keyboard.releaseAll();
 return 2;
 }
 else if(val>820){
  Keyboard.press(0xF2);
  delay(40);
  Keyboard.releaseAll();
 return 3;
 }
 else if(val>750){
  Keyboard.press(0xF3);
  delay(40);
  Keyboard.releaseAll();
 return 4;
 }
 else if(val>660){
  Keyboard.press(0xF4);
  delay(40);
  Keyboard.releaseAll();
 return 5;
 }
 else if(val>620){
 Keyboard.press(0xF5);
  delay(40);
  Keyboard.releaseAll();
 return 6;
 }
 else if(val>585){
  Keyboard.press(0xF6);
  delay(40);
  Keyboard.releaseAll();
 return 7;
 }
 else if(val>540){
  Keyboard.press(0xF7);
  delay(40);
  Keyboard.releaseAll();
 return 8;
 }
 else if(val>500){
  Keyboard.press(0xF8);
  delay(40);
  Keyboard.releaseAll();
 return 9;
 }
 else if(val>475){
  Keyboard.press(0xF9);
  delay(40);
  Keyboard.releaseAll();
 return 10;
 }
 else if(val>455){
 Keyboard.press(0xFA);
  delay(40);
  Keyboard.releaseAll();
 return 11;
 }
 else if(val>425){
  Keyboard.press(0xFB);
  delay(40);
  Keyboard.releaseAll();
 return 12;
 }
 else if(val>370){
  Keyboard.press(0x80);
  Keyboard.press(0xCD);
  delay(40);
  Keyboard.releaseAll();
 return 13;
 }
 else if(val>300){
  Keyboard.press(0x80);
  Keyboard.press(0xD4);
  delay(40);
  Keyboard.releaseAll();
 return 14;
 }
 else if(val>260){
  Keyboard.press(0x80);
  Keyboard.press(0xD3);
  delay(40);
  Keyboard.releaseAll();
 return 15;
 }
 else if(val>200){
  Keyboard.press(0x80);
  Keyboard.press(0xD6);
  delay(40);
  Keyboard.releaseAll();
 return 16;
 }
 else
   return 0; 
}
int get_keypad_2() {
 int val=analogRead(A1);
 if(val>1000){
  Keyboard.press(0x80);
  Keyboard.press(0x30);
  delay(40);
  Keyboard.releaseAll();
 return 1;
 }
 else if(val>900){
  Keyboard.press(0x80);
  Keyboard.press(0x31);
  delay(40);
  Keyboard.releaseAll();
 return 2;
 }
 else if(val>820){
  Keyboard.press(0x80);
  Keyboard.press(0x32);
  delay(40);
  Keyboard.releaseAll();
 return 3;
 }
 else if(val>750){
  Keyboard.press(0x80);
  Keyboard.press(0x33);
  delay(40);
  Keyboard.releaseAll();
 return 4;
 }
 else if(val>660){
  Keyboard.press(0x80);
  Keyboard.press(0x34);
  delay(40);
  Keyboard.releaseAll();
 return 5;
 }
 else if(val>620){
 Keyboard.press(0x80);
  Keyboard.press(0x35);
  delay(40);
  Keyboard.releaseAll();
 return 6;
 }
 else if(val>585){
  Keyboard.press(0x80);
  Keyboard.press(0x36);
  delay(40);
  Keyboard.releaseAll();
 return 7;
 }
 else if(val>540){
  Keyboard.press(0x80);
  Keyboard.press(0x37);
  delay(40);
  Keyboard.releaseAll();
 return 8;
 }
 else if(val>500){
  Keyboard.press(0x80);
  Keyboard.press(0x38);
  delay(40);
  Keyboard.releaseAll();
 return 9;
 }
 else if(val>475){
  Keyboard.press(0x80);
  Keyboard.press(0x39);
  delay(40);
  Keyboard.releaseAll();
 return 10;
 }
 else if(val>455){
 Keyboard.press(0x80);
  Keyboard.press(0x2e);
  delay(40);
  Keyboard.releaseAll();
 return 11;
 }
 else if(val>425){
  Keyboard.press(0x80);
  Keyboard.press(0xC2);
  delay(40);
  Keyboard.releaseAll();
 return 12;
 }
 else if(val>370){
  Keyboard.press(0x80);
  Keyboard.press(0xC3);
  delay(40);
  Keyboard.releaseAll();
 return 13;
 }
 else if(val>300){
  Keyboard.press(0x80);
  Keyboard.press(0x65);
  delay(40);
  Keyboard.releaseAll();
 return 14;
 }
 else if(val>260){
  Keyboard.press(0x80);
  Keyboard.press(0xC4);
  delay(40);
  Keyboard.releaseAll();
 return 15;
 }
 else if(val>200){
  Keyboard.press(0x80);
  Keyboard.press(0xC6);
  delay(40);
  Keyboard.releaseAll();
 return 16;
 }
 else
   return 0; 
}
