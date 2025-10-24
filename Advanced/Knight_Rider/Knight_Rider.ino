const int ledPins[] = {3, 5, 6, 9, 10}; // LED pins
int numLeds = 5;

void setup() {
  for(int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT); // set all LED pins as output
  }
}

void loop() {
  // forward sequence
  for(int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // turn LED on
    delay(100);                     // wait
    digitalWrite(ledPins[i], LOW);  // turn LED off
  }

  // backward sequence
  for(int i = numLeds - 2; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
