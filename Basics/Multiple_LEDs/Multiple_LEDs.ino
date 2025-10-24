/*
  Multiple LEDs
  -------------
  This example shows how to control multiple LEDs one after another.
  Each LED turns on and off in sequence.

  Hardware setup:
  - 3 LEDs connected to pins 8, 9, and 10 (through 220Ω resistors).
*/

int ledPins[] = {8, 9, 10}; // LED pins
int numLeds = 3;            // Number of LEDs

void setup() {
  // Set all LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn each LED on and off in sequence
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);         // LED on
    delay(500);                             // LED is on for half a second
    digitalWrite(ledPins[i], LOW);          // LED off
  }
}