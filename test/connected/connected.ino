
int pushButton = 12;
int green = 7;
int red = 8;
int FAILED = 0;

//from pins_arduino.
/*
static const uint8_t A0 = 14;
static const uint8_t A1 = 15;
static const uint8_t A2 = 16;
static const uint8_t A3 = 17;
static const uint8_t A4 = 18;
static const uint8_t A5 = 19;
static const uint8_t A6 = 20;
static const uint8_t A7 = 21;
*/
int8_t checkIfConnected(uint8_t pin1, uint8_t pin2)
{
  int8_t ret = 0;
  pinMode(pin1, OUTPUT);
  digitalWrite(pin1, 1);
  digitalWrite(pin2, 1);
  delay(10);
  Serial.print("PIN ");
  Serial.print(pin1);
  Serial.print(" and ");
  Serial.print(pin2);
      

  if (digitalRead(pin2)) {
    digitalWrite(pin1, 0);
    delay(10);

    if (!digitalRead(pin2)) {
      ret = 1;
      FAILED = 1;
      Serial.println(" CONNECTED");
    }
  }

  pinMode(pin1, INPUT);
  digitalWrite(pin1, 0);
  digitalWrite(pin2, 0);
  Serial.println(" OPEN");
  return ret;
}

void setup() {
  delay(500);
  Serial.begin(115200);
  Serial.println("--------------");
  Serial.println("PIN SHORT TEST");
  
  for(int i = 2; i < 22; i++)
  {    
    for(int j = i+1; j < 22; j++)
    {
    checkIfConnected(i,j);
    }
  }
  
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);

  pinMode(pushButton, INPUT);
  digitalWrite(pushButton, HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  
  if(FAILED)
  {   
     digitalWrite(red, HIGH);
     delay(100);
     digitalWrite(red,LOW);
     delay(100);
    
  }
  else
  {
    digitalWrite(green, HIGH);
     delay(200);
     digitalWrite(green,LOW);
     delay(100);    
  }
  
  
  
}
