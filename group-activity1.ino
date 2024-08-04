int leds[] = {13, 12, 11, 10, 9, 8, 7, 6}; // LED pins
int delays[] = {500, 500, 500, 500, 500, 500, 1000, 
                500, 500, 500, 500, 250, 250, 250, 250, 1000, 
                500, 500, 1000, 
                500, 500, 1000, 
                1000, 1000, 1000, 1000, 3000}; // Delays in ms

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(leds[i], OUTPUT); // Set LED pins as output
  }
}

void loop() {
  for (int i = 0; i < 26; i++) {
    int ledIndex = i % 7;
    digitalWrite(leds[ledIndex], HIGH); // Turn on the current LED
    delay(delays[i]); // Wait for the specified time
    digitalWrite(leds[ledIndex], LOW); // Turn off the current LED
  }
}
