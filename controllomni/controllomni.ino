#include <SoftPWM.h>
#include <SoftPWM_timer.h>

/*front goes to u2, back goes to u1 I THINK, A is left, B is right
Up:
^^   bye
^^
Down
vv
vv
Left
^v
v^
Right
v^
^v

turn right
^v
^v
turn left
v^
v^
*/
// //u2 board pin numbers
// const int PWMBf = 6; //d3
// const int BIN2f = 13; //d10
// const int BIN1f = 12; //d9
// const int STBYf = 9; //d6
// const int AIN1f = 8; //d5
// const int AIN2f = 7; //d4
// const int PWMAf = 5; //d2

// //u1 board pin nums
// const int PWMAb = 11; //d8
// const int AIN2b = 19; //a0
// const int AIN1b = 20; //a1
// const int STBYb = 21; //a2
// const int BIN1b = 22; //a3
// const int BIN2b = 23; //a4
// const int PWMBb = 10; //d7

//u2 board pin numbers
const int PWMBf = 3; //d3
const int BIN2f = 10; //d10
const int BIN1f = 9; //d9
const int STBYf = 6; //d6
const int AIN1f = 5; //d5
const int AIN2f = 4; //d4
const int PWMAf = 2; //d2

//u1 board pin nums
const int PWMAb = 8; //d8
const int AIN2b =A0; //a0
const int AIN1b = A1; //a1
const int STBYb = A2; //a2
const int BIN1b = A3; //a3
const int BIN2b = A4; //a4
const int PWMBb = 7; //d7
//all pin numbers used: 5, 6, 7, 8, 9, 10, 11, 12, 13, 19, 20, 21, 22, 23
void setup() {
  for (int i = 5; i<14; i++) {
    pinMode(i, OUTPUT);
  }
  for (int i = 19; i<24; i++) {
    pinMode(i, OUTPUT);
  }

  digitalWrite(STBYf, HIGH);
  digitalWrite(STBYb, HIGH);
  SoftPWMBegin();
  

}

void loop() {
  // flMotor(100);
  //frMotor(100);
  motorWrite(255, BIN1b, BIN2b, PWMBb);
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

void flMotor(int speed){
  if(speed < 0){
  digitalWrite(AIN1f, HIGH);
  digitalWrite(AIN2f, LOW);}
  else{
    digitalWrite(AIN1f, LOW);
    digitalWrite(AIN2f, HIGH);}
    
}
void frMotor(int speed){
  if(speed < 0){
  digitalWrite(BIN1f, HIGH);
  digitalWrite(BIN2f, LOW);}
  else{
    digitalWrite(BIN1f, LOW);
    digitalWrite(BIN2f, HIGH);}
}
void blMotor(int speed){
  if(speed < 0){
  digitalWrite(AIN1b, HIGH);
  digitalWrite(AIN2b, LOW);}
  else{
    digitalWrite(AIN1f, LOW);
    digitalWrite(AIN2f, HIGH);}
}
void brMotor(int speed){
  if(speed < 0){
  digitalWrite(BIN1b, HIGH);
  digitalWrite(BIN2b, LOW);}
  else{
    digitalWrite(BIN1b, LOW);
    digitalWrite(BIN2b, HIGH);}
}

void tRight(int speed){
  flMotor(speed);
  frMotor(speed*-1);
  blMotor(speed);
  brMotor(speed*-1);
}
void tLeft(int speed){
  flMotor(speed*-1);
  frMotor(speed);
  blMotor(speed*-1);
  brMotor(speed);
}
