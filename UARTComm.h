#ifndef UARTCOMM_H
#define UARTCOMM_H

#include <Arduino.h>

class UARTComm {
  public:
    void init(long baudRate);
    void sendData(String msg);
    String receiveData();
};

#endif
