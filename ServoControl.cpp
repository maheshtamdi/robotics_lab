#include "ServoControl.h"
#include <Arduino.h>

void ServoControl::init(int p) {
    pin = p;
    pinMode(pin, OUTPUT);
}

void ServoControl::setAngle(int angle) {
    int pwm = map(angle, 0, 180, 544, 2400);
    analogWrite(pin, pwm / 4); // simulate servo PWM
}
