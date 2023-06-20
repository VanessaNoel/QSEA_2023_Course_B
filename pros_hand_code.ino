#include <Servo.h>;

//setting up button pins:
const int buttonThumb = 2;
const int buttonIndex = 4;
const int buttonMiddle = 7; 
const int buttonRing = 8;
const int buttonPinky = 12;

//setting up servo pins:
const int servoThumb = 3;
const int servoIndex = 5;
const int servoMiddle = 6;
const int servoRing = 9;
const int servoPinky = 10;

//init servos:
Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;

void setup() {
  //setting the buttons to input
  pinMode(buttonThumb, INPUT_PULLUP);
  pinMode(buttonRing, INPUT_PULLUP);
  pinMode(buttonMiddle, INPUT_PULLUP);
  pinMode(buttonIndex, INPUT_PULLUP);
  pinMode(buttonPinky, INPUT_PULLUP);

  //attaching the servos to the pins
  thumbServo.attach(servoThumb);
  ringServo.attach(servoRing);
  middleServo.attach(servoMiddle);
  indexServo.attach(servoIndex);
  pinkyServo.attach(servoPinky);
}

void loop() {
  //init all the button state variables:
  int buttonStateThumb;
  int buttonStateRing;
  int buttonStateMiddle;
  int buttonStateIndex;
  int buttonStatePinky;

  //reading the buttons' state at each pin:
  buttonStateThumb = digitalRead(buttonThumb);
  buttonStateRing = digitalRead(buttonRing);
  buttonStateMiddle = digitalRead(buttonMiddle);
  buttonStateIndex = digitalRead(buttonIndex);
  buttonStatePinky = digitalRead(buttonPinky);


  //YOU WILL NEED TO MODIFY THE CODE BASED ON YOUR SERVO ORIENTATION!!!
  
  //thumb pressed:
  if (buttonStateThumb == LOW){
    thumbServo.write(0);
  }

  if (buttonStateThumb == HIGH) {
    thumbServo.write(180);
  }
  
  //index finger pressed:
  if (buttonStateIndex == LOW){
    indexServo.write(0);
  }

  if (buttonStateIndex == HIGH) {
    indexServo.write(180);
  }
  
  
  //middle finger pressed:
  if (buttonStateMiddle == LOW){
    middleServo.write(180);
  }

  if (buttonStateMiddle == HIGH) {
    middleServo.write(0);
  }
  
  //ring finger pressed:
  if (buttonStateRing == LOW){
    ringServo.write(180);
  }

  if (buttonStateRing == HIGH) {
    ringServo.write(0);
  }

  //pinky finger pressed:
  if (buttonStatePinky == LOW){
    pinkyServo.write(180);
  }

  if (buttonStatePinky == HIGH) {
    pinkyServo.write(0);
  }
  
}
