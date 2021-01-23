int led = 4;
int touchhigh = 8;
int touchlow = 9;  
int pwmsignal;


void setup() {

pinMode (led, OUTPUT ); //LED
pinMode (touchhigh, INPUT); // Touchsensor 1     pin in und out festlegung
pinMode (touchlow, INPUT); // Touchsensor 2
}


void loop() {

delay (5);

if (touchhigh == HIGH && touchlow == HIGH){
  analogWrite (led, 0);
  delay (500);
}
  
delay (5);

if (touchhigh == HIGH){
  if (pwmsignal >= 255){
    pwmsignal = 0;
    analogWrite (led, pwmsignal);
    delay (5);
  }
  else
  pwmsignal = pwmsignal +1;
  analogWrite (led, pwmsignal);
}

delay (5);

if (touchhigh == HIGH && touchlow == HIGH){
  analogWrite (led, 0);
}
  
delay (5);

if (touchlow == HIGH){
  if (pwmsignal == 0){
    pwmsignal = 255;
    analogWrite (led, pwmsignal);
    delay (5);
    }
    else
    pwmsignal = pwmsignal -1;
    analogWrite (led, pwmsignal);
}

delay (5);

if (touchhigh == HIGH && touchlow == HIGH){
  analogWrite (led, 0);
  delay (500);
}

  delay (5);

}
