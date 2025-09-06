#include <Arduino.h>
#include "MotorControl.h"
#include "StepperControl.h"
#include "ServoControl.h"
#include "UARTComm.h"
#include "Sensors.h"

MotorControl dcMotor;
StepperControl stepper;
ServoControl servo;
UARTComm uart;
Sensors sensors;

void setup() {
    Serial.begin(9600);
    uart.init(9600);

    dcMotor.init(9, 2, 3);   // motor PWM pin, encoder pins
    stepper.init(4, 5, 6, 7); // stepper pins
    servo.init(10);           // servo pin
    sensors.init(A0, A1);     // sensor pins
}

void loop() {
    // Example: PID control of DC motor
    int targetSpeed = 100;  // Example setpoint
    dcMotor.update(targetSpeed);

    // Stepper example
    stepper.step(200); 

    // Servo example
    servo.setAngle(90);

    // Sensor feedback loop
    int dist = sensors.readDistance();
    if (dist < 20) {
        uart.sendData("Obstacle detected!");
        dcMotor.stop();
    }

    // Handle UART communication
    String msg = uart.receiveData();
    if (msg.length() > 0) {
        Serial.println("Received: " + msg);
    }

    delay(100);
}

