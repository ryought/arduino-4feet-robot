#include <Servo.h>

Servo servoRFront; //servo motor(Right-Front)
Servo servoLFront;
Servo servoRRear; //servo motor(Right-Rear)
Servo servoLRear;
Servo servoNeck;


void setup(){
  servoRFront.attach(13);
  servoLFront.attach(12);
  servoNeck.attach(11);
  servoRRear.attach(10);
  servoLRear.attach(9);
  
}

void loop(){
  for (int angle = 40 ; angle <= 100 ; angle++){
    servoRFront.write(angle);
    servoLFront.write(angle);
    servoRRear.write(angle);
    servoLRear.write(angle);
    delay(20);
  }
}

