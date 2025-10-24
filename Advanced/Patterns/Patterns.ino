/*
  Patterns
  --------
  Demonstrates how to create repeating LED patterns.
  Uses loops and arrays to build structured light effects.

  Hardware setup:
  - 4 LEDs connected to pins 8, 9, 10, and 11 (each with 220Ω resistors(does not matter))
*/

int leds[] = {8, 9, 10, 11};
int numLeds = 4;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Pattern 1: Forward chase
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }

  // Pattern 2: Reverse chase
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }

  // Pattern 3: Blink all LEDs
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
  }
  delay(300);
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(300);
}
