#include "MotorControl.h"
#include <Arduino.h>

MotorControl::MotorControl() : encoderCount(0), pid(1.0, 0.01, 0.1) {}

void MotorControl::init(int pwm, int a, int b) {
    pwmPin = pwm; encA = a; encB = b;
    pinMode(pwmPin, OUTPUT);
    pinMode(encA, INPUT_PULLUP);
    pinMode(encB, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(encA), encoderISR, RISING);
}

void MotorControl::update(int targetSpeed) {
    double currentSpeed = encoderCount;  // simplistic
    double control = pid.compute(targetSpeed, currentSpeed);
    analogWrite(pwmPin, constrain(control, 0, 255));
    encoderCount = 0; // reset count for next loop
}

void MotorControl::stop() {
    analogWrite(pwmPin, 0);
}

void MotorControl::encoderISR() {
    // Example ISR logic
}
