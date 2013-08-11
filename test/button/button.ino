
int pushButton = 12;
int green = 7;
int red = 8;

void setup() {
  
  pinMode(pushButton, INPUT);
  digitalWrite(pushButton, HIGH);
  
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT); 
  
  
}

void loop() {
  
  if( digitalRead(pushButton))
  {
   digitalWrite(green, HIGH);
  digitalWrite(red, LOW); 
    
  }
  else
  {
    digitalWrite(green, LOW); 
  digitalWrite(red, HIGH);
  
    
    
  }
 
}



