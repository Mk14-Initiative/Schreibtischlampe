int led = 4;
int touchhigh = 8;
int touchlow = 9;  
int pwmsignal;
int value = 1;

void setup() {

pinMode (led, OUTPUT ); //LED
pinMode (touchhigh, INPUT); // Touchsensor 1     pin in und out festlegung
pinMode (touchlow, INPUT); // Touchsensor 2
}

void loop() {

if (digitalRead (touchhigh) == HIGH && digitalRead (touchlow) == HIGH){
  digitalWrite (led, 0);
  delay (500);
}
  
delay (5);

if (digitalRead (touchhigh) == HIGH){
  if (pwmsignal >= 255){
    analogWrite (led, pwmsignal);
    pwmsignal = 0;
    delay (5);
  }
  else
  pwmsignal = pwmsignal + value;
  analogWrite (led, pwmsignal);
  //wenn gehlten wird dann nächste funktion
}

delay (5);

if (digitalRead (touchlow) == HIGH){
  if (pwmsignal == 0){
    pwmsignal = 255;
    analogWrite (led, pwmsignal);
    delay (5);
    }
    else
    pwmsignal = pwmsignal - value;
    analogWrite (led, pwmsignal);
}

delay (5);



}
