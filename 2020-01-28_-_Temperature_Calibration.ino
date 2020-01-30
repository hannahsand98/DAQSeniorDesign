int TempPin = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int TempRead = analogRead(TempPin);
  Serial.print(TempRead);
  
}
