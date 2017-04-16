//PNP三极管 低电平继电器吸合。
char val;
//int ledpin = 8;//14
int ledpin = 7;//13
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
 // pinMode(ledPin, OUTPUT);
}

void loop()
{  digitalWrite(ledpin, HIGH);
  val = Serial.read();
  
  if (val == 'o')
  {
    digitalWrite(ledpin, LOW);
    Serial.println("Door ON!");
    delay(3000);
    digitalWrite(ledpin, HIGH);
    
  } else if (val == 'f') {
    digitalWrite(ledpin, HIGH);
    Serial.println("Door OFF!");
  }
}
