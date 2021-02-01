int led = 4;
int touchhigh = 8;
int touchlowl = 9;  
//int to = 10;
int ch;
int p = 1;
void setup() {
pinMode (led, OUTPUT ); //LED
pinMode (touchhigh, INPUT); // Touchsensor 1     pin in und out festlegung
pinMode (touchlowl, INPUT); // Touchsensor 2
//pinMode (to, INPUT); // Ausschalter
} 
void loop() 
{  
    if  (digitalRead (touchhigh) == HIGH){  // Wenn der Touchsensor 1 berührt wird
  ch = ch + p;                        // wird der PWM Wert um 1 erhöht
analogWrite (led, ch);                   // und dann am LED PIN ausgegeben
delay (5);                             // eine Zeitverezögerung damit der Arduino die Werte richtig verarbeiten kann und ausgeben
 if (ch >= 255){                      // hier wird geprüft ob der PWM Wert höher oder gleich 255 ist
digitalWrite (led, LOW);                // ist er höher oder gleich dann wird die LED ausgeschaltet
ch = 1;                               // ch wird auf den LED Wert gesetzt
}
}
delay (5);                            
if (digitalRead (touchhigh) == HIGH && digitalRead (touchlowl) == HIGH){        // Wenn der Ausschalter berührt wird
  digitalWrite (led, LOW);              // wird die LED Ausgeschaltet
  delay (500);
}
delay (5);
 if  (digitalRead (touchlowl) == HIGH){      // Wenn der Touchsensor 2 berührt wird
  ch = ch - p;                        // wird der PWM Wert um 1 reduziert
analogWrite (led, ch);                  // und dann am LED PIN ausgegben 
delay (5);                             // eine Zeitverzögerung damit der Arduino die Werte richtig verarbeiten kann und ausgeben
 if (ch <= 0){                        // hier wird geprüft ob der PWM Wert kleiner oder gleich 0 ist
digitalWrite (led, HIGH);               // ist er niedrieger oder gleich dann wird die LED ausgeschaltet
ch = 254;                             // ch wird auf den LED Wert gesetzt
}
}
delay (5);
}
 
 
