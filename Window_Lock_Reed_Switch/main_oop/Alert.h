#ifndef Alert_h
#define Alert_h

#include <Arduino.h>

class Alert{
private:
  byte _pin;

public:
  Alert();
  Alert(byte _pin);
  int finalCheck;
  void check();
  void buzzerOn();
  void buzzerOff();
};

#endif