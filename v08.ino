#define TOUCH_SENSOR 3 //the touch sensor is connected to D3
int led = 7;
int th = 5;
int tl = 6;  

void setup() 
{

pinMode (led, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2

digitalWrite (led, 50);


}
  
void loop() 
{
    if (th = HIGH);  
    {
  digitalWrite (led, ++) ;
  }
if (tl = HIGH); 
{
digitalWrite (led, --);
 }
if (th, HIGH == tl HIGH); {
 digitalWrite (led, LOW);
 }

} 
