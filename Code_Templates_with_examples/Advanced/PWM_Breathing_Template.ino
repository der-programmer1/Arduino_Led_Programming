// PWM Breathing LED Template
// Smoothly increases and decreases LED brightness using PWM.

const int ledPin = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness); // Set LED brightness
  brightness += fadeAmount;

  if(brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount; // Reverse direction
  }

  delay(30); // Smooth transition
}
