#include "PID.h"

PID::PID(double kp, double ki, double kd) 
: Kp(kp), Ki(ki), Kd(kd), prevError(0), integral(0) {}

double PID::compute(double setpoint, double measured) {
    double error = setpoint - measured;
    integral += error;
    double derivative = error - prevError;
    prevError = error;
    return (Kp*error + Ki*integral + Kd*derivative);
}
