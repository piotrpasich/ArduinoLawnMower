#ifndef MOTOR_H
#define MOTOR_H

class Motor {
  public:
    Motor(int pinForward, int pinReverse);
    void forward();
    void reverse();
    void stopWorking();
  private:
    int pinForward;
    int pinReverse;
    int speed = 255;
};

#endif // MOTOR_H
