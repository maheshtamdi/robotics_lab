

# 🤖 Robotics Lab 

## 📌 Overview

This project implements **real-time robotic control** using C++ on Arduino, focusing on precise motion control and robust communication. It integrates **PID control**, **stepper microstepping**, **custom PWM-based servo actuation**, and **sensor-driven decision-making**, along with **UART-based bi-directional communication**.

The system demonstrates how embedded control strategies can be applied to robotics for smooth, accurate, and responsive performance.

---

## 🚀 Features

* **DC Motor Control with PID**

  * Quadrature encoder feedback
  * Interrupt Service Routines (ISRs) for real-time speed sensing
* **Stepper Motor Microstepping**

  * Fine motion control for precise positioning
* **Custom PWM Servo Control**

  * Software-driven PWM for servo actuation
* **UART Communication**

  * Bi-directional data exchange with host system
* **Sensor-Driven Algorithms**

  * Robot adapts decisions based on sensor feedback

---

## 📂 Project Structure

```
RoboticsLab-ME381/
│
├── main.cpp            # Entry point controlling system flow
├── MotorControl.cpp     # DC motor control with encoder feedback
├── MotorControl.h
├── PID.cpp              # PID algorithm implementation
├── PID.h
├── StepperControl.cpp   # Stepper motor microstepping
├── StepperControl.h
├── ServoControl.cpp     # Custom PWM servo control
├── ServoControl.h
├── UARTComm.cpp         # UART communication handling
├── UARTComm.h
├── Sensors.cpp          # Sensor algorithms for robot decision-making
├── Sensors.h
```

---

## ⚙️ Requirements

* **Arduino IDE** or PlatformIO
* **Arduino-compatible board** (e.g., Arduino Uno, Mega)
* Hardware components:

  * DC Motor with encoder
  * Stepper Motor + Driver
  * Servo Motor
  * Sensors (IR/Ultrasonic/etc.)
* Jumper wires, breadboard, power supply

---

## 🛠️ Setup & Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/maheshtamdi/RoboticsLab-ME381.git
   cd RoboticsLab-ME381
   ```
2. Open the project in **Arduino IDE**.
3. Upload `main.cpp` (and linked files) to the Arduino board.
4. Connect motors, sensors, and serial monitor.
5. Run the system and observe motor actuation, UART messages, and sensor-driven behaviors.

---

## 📊 Example Workflow

* DC motor speed is regulated with PID using encoder feedback.
* Stepper executes precise steps for controlled movement.
* Servo adjusts based on robot task.
* Sensors provide environmental feedback (e.g., obstacle detection).
* UART allows monitoring and control from a host PC.


---

## 📧 Contact

For queries or collaboration, reach out at: **[maheshmeenaa7976@gmail.com](mailto:maheshmeenaa7976@gmail.com)**
