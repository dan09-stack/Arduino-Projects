//  Push Button Latch
int btnPin = 2;
int LEDPin = 3;

bool LEDState = false ;
bool btnState = false ;
bool lastBtnState = false;

void setup(){
  pinMode(btnPin, INPUT);
  pinMode(LEDPin, OUTPUT);

  digitalWrite(LEDPin, LEDState);
}

void loop(){
  btnState = btnPin;
  if (btnState==HIGH && lastBtnState==LOW) {    
    LEDState = !LEDState;
    digitalWrite(LEDPin, LEDState);
  }
  lastBtnState = btnState;
}
