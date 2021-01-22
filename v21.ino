int l = 2;
int th = 5;
int tl = 6;  
int ch;


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
if (digitalRead (th = HIGH));
{
ch, + 50;
digitalWrite (l, ch);
delay (500);
if (ch > 255);
{
digitalWrite (l, 0);
}
}
delay (500);

if (digitalRead (tl = HIGH));
{
ch, - 50;
digitalWrite (l, ch);
if (ch < 2);
{
digitalWrite (l, 255);
}
}
delay (500);
}
