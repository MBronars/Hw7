int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 9;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  // turn the ledPin on
  if(sensorValue> 255){
    digitalWrite(ledPin1, HIGH);
  }
  if(sensorValue> 511){
    digitalWrite(ledPin2, HIGH);
  }
  if(sensorValue> 767){
    digitalWrite(ledPin3, HIGH);
  }
 
  
}
