#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include <HCSR04.h>
#include "Arduino.h"

class UltraSonicSensor {
  public:
    UltraSonicSensor(int trigPin, int echoPin);
    int measureDistanceCm();
  private:
    UltraSonicDistanceSensor* distanceSensor;
};

#endif // ULTRASONICSENSOR_H
