#ifndef MOTOR_CONTROLLER_H
#define MOTOR_CONTROLLER_H

#include "Motor.h"

class MotorController {
  public: 
    MotorController(Motor leftMotor, Motor rightMotor);
    void moveForward();
    void moveReverse();
    void turnLeft();
    void turnRight();
    void stopWorking();
  protected:
    Motor leftMotor;
    Motor rightMotor;
};

#endif
