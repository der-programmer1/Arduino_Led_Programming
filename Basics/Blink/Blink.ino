/*
  Blink
  -----
  The simplest example to start with Arduino.
  This program turns an LED on for one second, then off for one second, repeatedly.

  Hardware setup:
  - Connect an LED to digital pin 13 through a 220Ω resistor or without. Does not matter.
*/

void setup() {
  // Initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // Turn the LED on
  delay(1000);              // Wait for one second
  digitalWrite(13, LOW);    // Turn the LED off
  delay(1000);              // Wait for one second
}