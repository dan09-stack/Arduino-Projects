//LED Chasser
int ledPin1 = 12;
int ledPin2 = 11;
int ledPin3 = 10;
int ledPin4 = 9;
int ledPin5 = 8;

int time = 1000;

void setup(){
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
}
void loop(){
    digitalWrite(ledPin1, HIGH);
    delay(time);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(time);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(time);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(time);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(time);
    digitalWrite(ledPin5, LOW);
}