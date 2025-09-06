#include "Sensors.h"
#include <Arduino.h>

void Sensors::init(int p1, int p2) {
    pin1 = p1; pin2 = p2;
    pinMode(pin1, INPUT);
    pinMode(pin2, INPUT);
}

int Sensors::readDistance() {
    int val = analogRead(pin1);
    return map(val, 0, 1023, 0, 100); // Example cm mapping
}
