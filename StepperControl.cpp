#include "StepperControl.h"
#include <Arduino.h>

void StepperControl::init(int p1, int p2, int p3, int p4) {
    pin1 = p1; pin2 = p2; pin3 = p3; pin4 = p4;
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}

void StepperControl::step(int steps) {
    // Simple stepping logic
    for (int i=0; i<steps; i++) {
        digitalWrite(pin1, HIGH);
        digitalWrite(pin2, LOW);
        delayMicroseconds(1000);
        // ... (microstepping sequence can be expanded)
    }
}
