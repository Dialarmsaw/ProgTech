
//setup the variables
int l = 0; // a2
int m = 0; // a1
int r = 0; // a0

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // reads if a sensor detect a line
  if(analogRead(A0) > 200){
    r = 1;
  }
  if(analogRead(A1) > 200){
    m = 1;
  }
  if(analogRead(A2) > 200){
    l = 1;
  }
  Serial.print(r);
  Serial.print("  ");
  Serial.println(A0);
  //Serial.print(" ");
  //Serial.print(r);
  //Serial.println(" ");
  r = 0;
  m = 0;
  l = 0;

  
  delay(1);        // delay in between reads for stability
}
