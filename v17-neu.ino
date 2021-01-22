int led = A0;
int th = 5;
int tl = 6;  
int ch;
void setup() 
{

pinMode (led, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2
//int v =130;
//analogWrite (led, LOW);
//delay (500);
}
  
void loop() 
{
  
if (digitalRead (th == HIGH));
{
  ch + 50;
analogWrite (led = ch);
delay (500);
if (ch > 255);
{

analogWrite (led, 0);
}
}
delay (500);

if (analogRead (tl==HIGH));
{
  ch - 50;
analogWrite (led = ch);

if (ch < 0);

{
analogWrite (led, 255);
}
}
delay (500);

if (analogRead (th=tl == HIGH));
{
  digitalWrite (led, 0);
  
}
delay (500);
}
