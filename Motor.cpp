

#include "Motor.h"
#include "Arduino.h"

Motor::Motor(int pinForward, int pinReverse): pinForward(pinForward), pinReverse(pinReverse) {
  Serial.print("Init forward:");
  Serial.println(pinForward);
  pinMode(pinForward, OUTPUT);
  pinMode(pinReverse, OUTPUT);
}

void Motor::forward() {
  Serial.print("Moving forward: ");
  Serial.println(pinForward);
  analogWrite(pinForward, speed);
  analogWrite(pinReverse, 0);
}

void Motor::reverse() {
  analogWrite(pinReverse, speed);
  analogWrite(pinForward, 0);
}

void Motor::stopWorking() {
  analogWrite(pinReverse, 0);
  analogWrite(pinForward, 0);
}

