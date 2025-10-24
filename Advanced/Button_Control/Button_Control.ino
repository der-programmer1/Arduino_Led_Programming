/*
  Button Control
  --------------
  Demonstrates how to control an LED using a push button.
  When the button is pressed, the LED turns on; otherwise, it turns off.

  Hardware setup:
  - LED connected to pin 9 through a 220Ω resistor. Also works without
  - Push button connected between pin 2 and ground
  - Uses the internal pull-up resistor for stable input
*/

const int buttonPin = 2;
const int ledPin = 9;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // internal pull-up, so LOW = pressed
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // Button pressed
  } else {
    digitalWrite(ledPin, LOW);   // Button released
  }
}
