#define TOUCH_SENSOR 3 //the touch sensor is connected to D3
  
int led = 13; // pin for the LED
  
void setup() 
{
 
pinMode(led, OUTPUT);
pinMode(TOUCH_SENSOR, INPUT);
}
  
void loop() 
{
int sensorValue = digitalRead(TOUCH_SENSOR);
  if(sensorValue)
  {
  digitalWrite(led, HIGH); // turn LED on
  while(digitalRead(TOUCH_SENSOR) == HIGH);
  digitalWrite(led, LOW); // turn LED off
  }
} 

//If then If digitalRead (TOUCH_SENSOR = HIGH
//then set LED High

if (sensorValue)== HIGHT;
{
 digitalWrite (led, HIGH);
 while (digitalRead(TOUCH_SENSOR) ==HIGH);
 digitalWrite(led, LOW);
}

