#ifndef SERVOCONTROL_H
#define SERVOCONTROL_H

class ServoControl {
  private:
    int pin;
  public:
    void init(int p);
    void setAngle(int angle);
};

#endif
