#ifndef Reed_h
#define Reed_h

#include <Arduino.h>

class Reed{
private:
  byte _pin;

public:
  Reed();
  Reed(byte _pin);
  int reedState;
  const int refState = 0;
  int finalState;
  int read();
};

#endif