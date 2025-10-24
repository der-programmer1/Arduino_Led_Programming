// Blink Template
// Simple example of turning an LED on and off repeatedly.

const int ledPin = 13; // Built-in LED
const int ON_TIME = 500;
const int OFF_TIME = 500;

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on
  delay(ON_TIME);
  digitalWrite(ledPin, LOW);  // Turn LED off
  delay(OFF_TIME);
}
