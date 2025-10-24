const int ledPin = 9; // PWM-capable pin
int brightness = 0;    // current brightness level
int fadeAmount = 5;    // amount to change the brightness

void setup() {
  pinMode(ledPin, OUTPUT); // set the LED pin as output
}

void loop() {
  analogWrite(ledPin, brightness); // set the LED brightness
  brightness += fadeAmount;         // increase or decrease brightness

  // reverse direction at the ends
  if(brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30); // wait for 30 milliseconds
}
