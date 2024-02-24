
int read = 0; // a0
int count = 0;
int timedel = 0;
int StartTime = 0;
bool white = false;
bool above = false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  float ARead = analogRead(A0);
  //Serial.println(ARead);
  //Serial.println(millis());
  
  if(ARead<640){
    if(above==true){
      timedel = millis()-StartTime;
      Serial.println(timedel);
      StartTime=millis();
      above=false;
    }
  }

  if(ARead>650){
    above=true;
  }
  
}
