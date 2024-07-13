//LED Blinker
int ledPin = 12;
int time = 1000;

void setup(){
    pinMode(ledPin, OUTPUT);
}
void loop(){
    digitalWrite(ledPin, HIGH);
    delay(time);
    digitalWrite(ledPin, LOW);
    delay(time);
}