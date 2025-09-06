#ifndef PID_H
#define PID_H

class PID {
  private:
    double Kp, Ki, Kd;
    double prevError, integral;
  public:
    PID(double kp, double ki, double kd);
    double compute(double setpoint, double measured);
};

#endif
