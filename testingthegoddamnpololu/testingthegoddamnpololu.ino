void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  float ARead = analogRead(A0);
  Serial.println(ARead);
}
