#define TOUCH_SENSOR 3 //the touch sensor is connected to D3
  

void setup() 
{
 pinMode (7 = OUTPUT); //LED
 pinMode (5 = INPUT); // Touch 1     pin in und out festlegung
 pinMode (6 = INPUT); // Touch 2

digitalWrite (7, 50);
pinMode(TOUCH_SENSOR, INPUT);
}
  
void loop() 
{
  if 5 = HIGH;
  digitalWrite 7 = ++;
 if 6 = HIGH;
 digitalWrite 7 = --;
 if 5 = 6 = HIGH;
 digitalWrite 7 = LOW;
  
//int sensorValue = digitalRead(TOUCH_SENSOR);
  //if(sensorValue)
  {
  //digitalWrite(led, HIGH); // turn LED on
  //while(digitalRead(TOUCH_SENSOR) == HIGH);
  //if (7, LOW); { digitalWrite (7, HIGH);}
  //else
  //goto 1
  
  //if (7, HIGH); {digitalWrite (7, LOW);}
  //delay (1000); 
  
  }
} 
