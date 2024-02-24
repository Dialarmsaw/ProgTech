/*
d5: PWMB
d6: BIN2
d7: BIN1
d8: STBY
d9: AIN1
d10: AIN2
d11: PWMA
 */
const int PWMA=11;   //Pololu drive A, D
const int AIN2=10;
const int AIN1 =9;
const int STDBY=8;
const int BIN1 =7;   //Pololu drive B, C
const int BIN2 =6;
const int PWMB =5;



void setup() {
  for (int i = 5; i<12; i++) {
    pinMode(i, OUTPUT);
  }

  digitalWrite(STDBY, HIGH);
}

void loop() {
  Left();
  delay(1000);
  Up();
  delay(1000);
  Right();
  delay(1000);
  Down();
  delay(1000);
}

void Left(){
  motorWrite(100, AIN1, AIN2, PWMA);
  motorWrite(-100, BIN1, BIN2, PWMB);
}
void Right(){
  motorWrite(-100, AIN1, AIN2, PWMA);
  motorWrite(100, BIN1, BIN2, PWMB);
}
void Up(){
  motorWrite(100, AIN1, AIN2, PWMA);
  motorWrite(100, BIN1, BIN2, PWMB);
}
void Down(){
  motorWrite(-100, AIN1, AIN2, PWMA);
  motorWrite(-100, BIN1, BIN2, PWMB);
}

void motorWrite(int speed, int pin_IN1, int pin_IN2, int pin_PWM){
  if(speed < 0){
    digitalWrite(pin_IN1, HIGH);
    digitalWrite(pin_IN2, LOW);
  }
  else{
    digitalWrite(pin_IN1, LOW);
    digitalWrite(pin_IN2, HIGH);
  }
  analogWrite(pin_PWM, abs(speed));
}
