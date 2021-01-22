#define TOUCH_SENSOR 3 //the touch sensor is connected to D3
int led = 7;
int th = 5;
int tl = 6;  

void setup() 
{

pinMode (led, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2
int v =128;
analogWrite (led, v);

}
  
void loop() 
{
  
if (digitalRead (th = HIGH));
analogWrite (led, +1);

} 
