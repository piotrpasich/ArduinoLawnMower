
#include "MotorController.h"
#include "Motor.h"
#include "Arduino.h"

MotorController::MotorController(Motor leftMotor, Motor rightMotor): leftMotor(leftMotor), rightMotor(rightMotor) {
    
}

void MotorController::moveForward() {
  leftMotor.forward();
  rightMotor.forward();
}

void MotorController::moveReverse() {
  leftMotor.reverse();
  rightMotor.reverse();
}

void MotorController::turnLeft() {
  leftMotor.reverse();
  rightMotor.forward();
}

void MotorController::turnRight() {
  leftMotor.forward();
  rightMotor.reverse();
}

void MotorController::stopWorking() {
  leftMotor.stopWorking();
  rightMotor.stopWorking();
}

