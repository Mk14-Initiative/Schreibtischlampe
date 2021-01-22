int l = 2;
int th = 5;
int tl = 6;  
int ch = 0;
void setup() 
{

pinMode (l, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2
digitalWrite (l, LOW); // LED Signal Deffinieren
delay (500);
}
  
void loop() 
{
  
if (digitalRead (th) == HIGH);
{

digitalWrite (l, +50);
delay (500);
if (l > 255);
{

digitalWrite (l, 0);
}
}
delay (500);

if (digitalRead (tl) ==HIGH);
{

digitalWrite (l, -50);

if (l < 0);

{
digitalWrite (l, 255);
}
}
delay (500);

if (digitalRead (th=tl) == HIGH);
{
  digitalWrite (l, 0);
  
}
delay (500);
}
