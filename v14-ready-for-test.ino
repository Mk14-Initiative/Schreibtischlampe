int led = 7;
int th = 5;
int tl = 6;  

void setup() 
{

pinMode (led, OUTPUT ); //LED
pinMode (th, INPUT); // Touch 1     pin in und out festlegung
pinMode (tl, INPUT); // Touch 2
//int v =130;
digitalWrite (led, 0);

}
  
void loop() 
{
   
if (analogRead (th == LOW));
{
digitalWrite (led, HIGH);
//if (led > 255);
//{
//digitalWrite (led, LOW);
//}

}

if (analogRead (tl==HIGH));
{
digitalWrite (led, LOW);
//if (led < 0);
{
//analogWrite (led, 255);
//}
}

if (analogRead (th=tl ==LOW));
{
  digitalWrite (led, LOW);
}
}
}

 
