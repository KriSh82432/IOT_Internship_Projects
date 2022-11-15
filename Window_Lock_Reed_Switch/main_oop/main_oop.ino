#include "Reed.h"
#include "Alert.h"

#define officeReedPin D1
#define officeAlertPin D2

Reed officeReed(officeReedPin);
Alert officeAlert(officeAlertPin);

void setup(){
  Serial.begin(9600);
}

void loop(){
  officeAlert.finalCheck = officeReed.read();
  officeAlert.check();
}