/*
  Fade
  ----
  Demonstrates the use of PWM (Pulse Width Modulation) to control LED brightness.
  The LED will gradually fade in and out.

  Hardware setup:
  - LED connected to pin 9 through a 220Ω resistor.
*/

int led = 9;          // PWM-capable pin
int brightness = 0;   // Current brightness level
int fadeAmount = 5;   // Amount to change brightness each step

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);   // Set LED brightness
  brightness = brightness + fadeAmount;

  // Reverse direction at limits
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30); // Adjust speed of fade
}
