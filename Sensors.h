#ifndef SENSORS_H
#define SENSORS_H

class Sensors {
  private:
    int pin1, pin2;
  public:
    void init(int p1, int p2);
    int readDistance();
};

#endif
