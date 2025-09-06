#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

#include "PID.h"

class MotorControl {
  private:
    int pwmPin, encA, encB;
    volatile long encoderCount;
    PID pid;
  public:
    MotorControl();
    void init(int pwm, int a, int b);
    void update(int targetSpeed);
    void stop();
    static void encoderISR();
};

#endif
