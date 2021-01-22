int l = 3;
int th = 8;
int tl = 9;  
int to = 10;
int ch;
int p = 1;
void setup() {
pinMode (l, OUTPUT ); //LED
pinMode (th, INPUT); // Touchsensor 1     pin in und out festlegung
pinMode (tl, INPUT); // Touchsensor 2
pinMode (to, INPUT); // Ausschalter
digitalWrite (l, HIGH); // LED Signal Deffinieren
} 
void loop() 
{
  
    if  (digitalRead (th) == HIGH){  // Wenn der Touchsensor 1 berührt wird
  ch = ch + p;                        // wird der PWM wert um 1 erhöht
analogWrite (l, ch);                   // und dann am LED PIN ausgegeben
delay (5);                             // eine Zeitverezögerung damit der Arduino die Werte richtig verarbeiten kann und ausgeben
 if (ch >= 255){                      // hier wird geprüft ob der PWM Wert höher oder gleich 255 ist
digitalWrite (l, LOW);                // ist er höher oder gleich dann wird die LED ausgeschaltet
}
}
delay (5);                            
if (digitalRead (to) == HIGH){        // Wenn der Ausschalter berührt wird
  digitalWrite (l, LOW);              // wird die LED Ausgeschaltet
}
delay (5);

 if (digitalRead (tl) == HIGH){       // Wenn der Touchsensor 2 berührt wird
 ch = ch - p;                         // wird der PWM wert um 1 reduziert
analogWrite (l, ch);                  // und dann am LED PIN ausgegeben
delay (5);
if (ch <= 1){                         // ist der 
digitalWrite (l, HIGH);
}
}


delay (5);
}

 
