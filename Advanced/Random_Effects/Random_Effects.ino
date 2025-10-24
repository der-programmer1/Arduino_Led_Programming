/*
  Random Effects
  ---------------
  Demonstrates how to use the random() function to create unpredictable LED behavior.

  Hardware setup:
  - 3 LEDs connected to pins 8, 9, and 10 through 220Ω resistors(resrstors does'nt matter)
*/

int leds[] = {8, 9, 10};
int numLeds = 3;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }

  randomSeed(analogRead(0)); // initialize random generator
}

void loop() {
  int ledIndex = random(0, numLeds); // pick a random LED
  int delayTime = random(100, 700);  // random delay

  digitalWrite(leds[ledIndex], HIGH);
  delay(delayTime);
  digitalWrite(leds[ledIndex], LOW);
}
