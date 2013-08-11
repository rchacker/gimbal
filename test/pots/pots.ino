
int leftValue = 0;  
int rightValue = 0;
int battSense = 0;
int green = 7;

void setup() {
  // initialize serial communications at 9600 bps:
  pinMode(green, OUTPUT);
  digitalWrite(green, HIGH);
  Serial.begin(9600); 
}

void loop() {
  leftValue = analogRead(A0);            
  Serial.print("left = " );                       
  Serial.print(leftValue);       
  delay(2);

  rightValue = analogRead(A7);            
  Serial.print("     right = " );                       
  Serial.print(rightValue);       
  delay(2);  
  
  battSense = analogRead(A6);            
  Serial.print("     batt = " );                       
  Serial.println(battSense);       
  delay(2);  

}
