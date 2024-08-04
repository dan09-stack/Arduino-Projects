int tl[2][3] = {{2, 3, 4}, {5, 6, 7}};  // Traffic lights: {NS: {red, yellow, green}, EW: {red, yellow, green}}
int pl[2][2] = {{8, 9}, {10, 11}};      // Pedestrian lights: {NS: {red, green}, EW: {red, green}}
int timeDelay[3] = {5000, 2000, 1000};

void setup() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) pinMode(tl[i][j], OUTPUT), digitalWrite(tl[i][j], LOW);
    for (int j = 0; j < 2; j++) pinMode(pl[i][j], OUTPUT), digitalWrite(pl[i][j], LOW), digitalWrite(pl[i][0], HIGH);
  }
}

void loop() {
  digitalWrite(tl[0][2], HIGH); digitalWrite(tl[0][0], LOW); digitalWrite(tl[1][0], HIGH); delay(timeDelay[0]);  // NS green, EW red
  digitalWrite(tl[0][2], LOW); digitalWrite(tl[0][1], HIGH); delay(timeDelay[1]);                                 // NS yellow
  digitalWrite(tl[0][1], LOW); digitalWrite(tl[0][0], HIGH); delay(timeDelay[2]);                                 // All red
  digitalWrite(tl[1][2], HIGH); digitalWrite(tl[1][0], LOW); delay(timeDelay[0]);                                 // EW green, NS red
  digitalWrite(tl[1][2], LOW); digitalWrite(tl[1][1], HIGH); delay(timeDelay[1]);                                 // EW yellow
  digitalWrite(tl[1][1], LOW); digitalWrite(tl[1][0], HIGH); delay(timeDelay[2]);                                 // All red
  
  digitalWrite(pl[0][0], LOW); digitalWrite(pl[0][1], HIGH); digitalWrite(pl[1][0], LOW); digitalWrite(pl[1][1], HIGH); delay(timeDelay[0]);  // NS and EW pedestrian green
  digitalWrite(pl[0][1], LOW); digitalWrite(pl[0][0], HIGH); digitalWrite(pl[1][1], LOW); digitalWrite(pl[1][0], HIGH); delay(timeDelay[2]);  // NS and EW pedestrian red
}
