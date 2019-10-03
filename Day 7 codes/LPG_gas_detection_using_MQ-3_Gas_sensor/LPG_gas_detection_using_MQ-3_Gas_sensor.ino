#include <LiquidCrystal.h>
 LiquidCrystal lcd(3, 2, 4, 5, 6, 7);

#define lpg_sensor 18
 #define buzzer 13

void setup() 
 {
   pinMode(lpg_sensor, INPUT);
   pinMode(buzzer, OUTPUT);
   lcd.begin(16, 2);
   lcd.print("LPG Gas Detector");
   lcd.setCursor(0,1);
   lcd.print("Circuit Digest");
   delay(2000);
 }

void loop() 
 {
   if(digitalRead(lpg_sensor))
   {
     digitalWrite(buzzer, HIGH);
     lcd.clear();
     lcd.print("LPG Gas Leakage");
     lcd.setCursor(0, 1);
     lcd.print("     Alert     ");
     delay(400);
     digitalWrite(buzzer, LOW);
     delay(500);
   }
   
   else 
   {
     digitalWrite(buzzer, LOW);
     lcd.clear();
     lcd.print("  No LPG Gas ");
     lcd.setCursor(0,1);
     lcd.print("   Leakage   ");
     delay(1000);
   }
 }
