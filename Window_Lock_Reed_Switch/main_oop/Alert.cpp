#include "Alert.h"
#include <Arduino.h>

Alert::Alert(byte pin){
  Serial.begin(9600);
  Serial.println("New alert system added.");
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void Alert::check(){
  if(finalCheck == 0){
      buzzerOn();
      Serial.println("Window is open. Close it immediately.");
    }
    else{
      buzzerOff();
    }
}

void Alert::buzzerOn(){
  for (int i=0; i<80; i++){
      digitalWrite(_pin, HIGH);
      delay(1);
      digitalWrite(_pin, LOW);
      delay(1);
    }
}

void Alert::buzzerOff(){
  digitalWrite(_pin, LOW);
}