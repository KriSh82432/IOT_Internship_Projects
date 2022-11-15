#include "Reed.h"
#include <Arduino.h>

Reed::Reed(byte pin){
  Serial.begin(9600);
  Serial.println("New reed switch added.");
  _pin = pin;
  pinMode(_pin, INPUT_PULLUP);
}

int Reed::read(){
  reedState = digitalRead(_pin);
    if(reedState == refState){
      return 0;
    }
    else{
      return 1;
    }
}