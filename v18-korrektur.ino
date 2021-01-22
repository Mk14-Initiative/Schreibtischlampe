int l = 2;
int th = 5;
int tl = 6;  
int ch;
void setup() 
{

pinMode (l, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2
//int v =130;
//analogWrite (l, LOW);
//delay (500);
}
  
void loop() 
{
  
if (digitalRead (th) == HIGH);
{
  ch + 50;
analogWrite (l, ch);
delay (500);
if (ch > 255);
{

analogWrite (l, 0);
}
}
delay (500);

if (analogRead (tl)==HIGH);
{
  ch - 50;
analogWrite (l, ch);

if (ch < 0);

{
analogWrite (l, 255);
}
}
delay (500);

//if (analogRead (th=tl) == HIGH);
//{
  //digitalWrite (l, 0);
  
//}
//delay (500);
}
