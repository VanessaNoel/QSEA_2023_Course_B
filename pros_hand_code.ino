#include <Servo.h>;

//setting up button pins:
const int buttonThumb = 2;
const int buttonFingers = 4;

//setting up servo pins:
const int servoThumb = 3;
const int servoFingers = 5;

//init servos:
Servo thumbServo;
Servo fingersServo;

void setup() {
  //setting the buttons to input
  pinMode(buttonThumb, INPUT_PULLUP);
  pinMode(buttonFingers, INPUT_PULLUP);

  //attaching the servos to the pins
  thumbServo.attach(servoThumb);
  fingersServo.attach(servoFingers);
}

void loop() {
  //init all the button state variables:
  int buttonStateThumb;
  int buttonStateFingers;

  //reading the buttons' state at each pin:
  buttonStateThumb = digitalRead(buttonThumb);
  buttonStateFingers = digitalRead(buttonFingers);

  //YOU WILL NEED TO MODIFY THE CODE BASED ON YOUR SERVO ORIENTATION!!!
  
  //thumb pressed:
  if (buttonStateThumb == LOW){
    thumbServo.write(0);
  }

  if (buttonStateThumb == HIGH) {
    thumbServo.write(180);
  }
  
  //fingers button pressed:
  if (buttonStateFingers == LOW){
    fingersServo.write(0);
  }

  if (buttonStateFingers == HIGH) {
    fingersServo.write(180);
  }
  
}
