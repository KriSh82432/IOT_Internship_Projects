#define officeReedPin  D1 // Lock pin for the office window
#define  officeBuzzerPin  D2 // Buzzer pin for the office window


void setup(){
  Serial.begin(9600);
}

class reed{ // Template for every lock in the house
private:
  byte pin;
  int reedState;
  int refState = 0;
  int finalState;

public:
  reed(){
    Serial.println("New Reed Switch Added.");
  }

  reed(byte apin){
    pin = apin;
    pinMode(pin, INPUT_PULLUP);
  }

  int read(){
    reedState = digitalRead(pin);
    if(reedState == refState){
      return 0;
    }
    else{
      return 1;
    }
  }
};

class alert{
private:
  byte pin;

public:
  int finalCheck;
  alert(){
    Serial.println("New Alert system Added.");
  }
  
  alert(byte apin){
    pin = apin;
    pinMode(pin, OUTPUT);
  }

  void check(){
    if(finalCheck == 0){
      Serial.println("Window is open. Close it immediately!!!");
      buzzerOn();
    }
    else{
      buzzerOff();
    }
  }

  void buzzerOn(){
    for (int i=0; i<80; i++){
      digitalWrite(pin, HIGH);
      delay(1);
      digitalWrite(pin, LOW);
      delay(1);
    }
  }

  void buzzerOff(){
    digitalWrite(pin, LOW);
  }
};

reed officeReed(officeReedPin);
alert officeAlert(officeBuzzerPin);

void loop(){
  officeAlert.finalCheck = officeReed.read();
  officeAlert.check();
}