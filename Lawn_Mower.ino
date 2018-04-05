
#include "UltraSonicSensor.h"
#include "Motor.h"
#include "MotorController.h"

//new sensors - works fine
UltraSonicSensor leftSensor(2, 3);
UltraSonicSensor rightSensor(4, 5);


Motor motorA(A3, A2);
Motor motorB(A6, A7);
MotorController motorController(motorA, motorB);

// include the library code:
#include <LiquidCrystal.h>

const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup () {
  Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.

  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("paps!");

//  Sensors sensors;
//
//  sensors.addLeftSensor(new UltraSonicSensor(11, 12));
//  sensors.addRightSensor(new UltraSonicSensor(11, 12));
//  sensors.addFrontSensor(new UltraSonicSensor(11, 12));
//
//  robotController.addSensors(sensors);
//  robotController.addLogger(new LCDLogger(13, 14))
//
//  MotorController motorController;
//  motorController.addLeftMotor(new Motor(10, 11));
//  motorController.addRightMotor(new Motor(10, 11));
//
//  robotController.addMotorController()
}

void loop () {
  //motorController.moveForward();  
  
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("L:");
  lcd.print(leftSensor.measureDistanceCm());
  lcd.print("    ");
  lcd.print("R:");
  lcd.print(rightSensor.measureDistanceCm());
  lcd.print("    ");
}

