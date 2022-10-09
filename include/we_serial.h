#ifndef WE_SERIAL_H
#define WE_SERIAL_H

#include "Arduino.h"

namespace WE_Serial
{
    extern String message;

    extern const long baudRate;

    void begin();

    void set(String);
    void clear();
    void add(String);

    void send();
    void quickSend(String);
}

#endif