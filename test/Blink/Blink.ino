/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int green = 7;
int red = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(green, HIGH);   
  digitalWrite(red, LOW);
  delay(500);               
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(500);             
}
