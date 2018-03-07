int ledPin = 13;



void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
 
}

void loop() {
  // read the value from the sensor:
  
  // turn the ledPin on
  
  int count = 0;
  while(count<1000)
  { 
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    count+=100;
  }
  count = 0;
  while(count<1000)
  { 
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    count+=10;
  }
  while(0==0)
  {
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    delay(50);
    
  }
