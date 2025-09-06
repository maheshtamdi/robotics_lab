#include "UARTComm.h"

void UARTComm::init(long baudRate) {
    Serial.begin(baudRate);
}

void UARTComm::sendData(String msg) {
    Serial.println(msg);
}

String UARTComm::receiveData() {
    if (Serial.available()) {
        return Serial.readStringUntil('\n');
    }
    return "";
}
