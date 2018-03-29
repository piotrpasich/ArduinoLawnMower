
#include <HCSR04.h>
#include "UltraSonicSensor.h"


UltraSonicSensor::UltraSonicSensor(int trigPin, int echoPin) {
  distanceSensor = new UltraSonicDistanceSensor(trigPin, echoPin);
};

int  UltraSonicSensor::measureDistanceCm() {
  return distanceSensor->measureDistanceCm();
};
