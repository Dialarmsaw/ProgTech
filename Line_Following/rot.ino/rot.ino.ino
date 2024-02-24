bool black = false;
bool prevblack = false;
int count = 1;
float StartTime = 0;
float Elapsed = 0;
float rpm = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float ARead = analogRead(A0);
  Serial.println(ARead);
  delay(1);
  //732
}
