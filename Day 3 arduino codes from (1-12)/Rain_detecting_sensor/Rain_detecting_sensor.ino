const int sensorMin = 0; // sensor minimum
const int sensorMax = 1024; // sensor maximum
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  int sensorReading = analogRead(A0);
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

  switch (range)
    {
      case 0: // Sensor getting completely wet
        Serial.println("RAINING");
        break;

      case 1:// Sensor getting partially wet
        Serial.println("RAIN WARNING");
        break;

      case 2:// Sensor dry
        Serial.println("NOT RAINING");
        break;
    }
  delay(1000); 
}
