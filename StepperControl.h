#ifndef STEPPERCONTROL_H
#define STEPPERCONTROL_H

class StepperControl {
  private:
    int pin1, pin2, pin3, pin4;
  public:
    void init(int p1, int p2, int p3, int p4);
    void step(int steps);
};

#endif
