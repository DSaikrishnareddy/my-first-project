#include <LiquidCrystal.h>
int sensor=A0; 
int dig_out;
float millivolt;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // sets the lcd interfacing pins
void setup()
{
pinMode(sensor,INPUT); // sets A0 as input
lcd.begin(16, 2);      // initializes the lcd
}

void loop()
{
dig_out=analogRead(sensor); // reads the input voltage
millivolt=(dig_out*4.882);  // converts the reading to millivolt
lcd.setCursor(0,0);
lcd.print("Pressure Sensor"); // prints "Pressure Sensor"
lcd.setCursor(0,1);
lcd.print(millivolt); // prints the input voltage 
lcd.setCursor(9,1);
lcd.print("mV");  // prints the"mV" notation
delay(300);       // 300 mS delay
lcd.clear();      // clears screen
}                 


 
