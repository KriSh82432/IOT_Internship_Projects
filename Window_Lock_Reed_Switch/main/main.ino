#define digitalOut D1
#define analogOut A0
#define buzzer D2

int dOut;
int aOut;

void setup() {
  Serial.begin(9600); //Change to 115200 baud rate for generic NodeMCU Development Boards. I have used NodeMCU V3
  pinMode(digitalOut, INPUT_PULLUP);
  pinMode(analogOut, INPUT);
  pinMode(buzzer, OUTPUT);
}

void buzzerOn(){
  //The frequency and tone of the buzzer
  for(int i = 0; i < 80; i++){
     digitalWrite(buzzer, HIGH);
     delay(1);
     digitalWrite(buzzer, LOW);
     delay(1);
  }
}

void loop() {
  dOut = digitalRead(digitalOut);
  aOut = analogRead(analogOut);
  Serial.println("Analog Volatge Value: ");
  Serial.println(aOut);
  Serial.println("Digital Value: ");
  Serial.println(dOut);
  if (dOut == 0){
    Serial.println("The window is open. Check it now!!!");
    buzzerOn();
  }
  else if (dOut == 1){
  }
  delay(100);
}
