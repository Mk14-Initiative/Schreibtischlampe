#define TOUCH_SENSOR 3 //the touch sensor is connected to D3
  
int led = 8; // pin for the LED
  
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
  if (led, LOW); { digitalWrite (led, HIGH);}
  if (led, HIGH); {digitalWrite (led, LOW);}
  delay (1000); 
  // Vergleichen
  //if bedingungen zum vergleichen
  // if (led, LOW); { digitalWrite (led, HIGH);}
  // if (led, HIGH); {digitalWrite (led, LOW);
  //digitalWrite(led, LOW); // turn LED off
   //delay (1000);
  }
} 


