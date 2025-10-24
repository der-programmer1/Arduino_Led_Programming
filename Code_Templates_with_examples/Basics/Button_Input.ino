// Button Input Template
// Reads a button press and toggles an LED.

const int ledPin = 13;
const int buttonPin = 2;
bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Button with internal pull-up
}

void loop() {
  if(digitalRead(buttonPin) == LOW){ // Button pressed
    ledState = !ledState;            // Toggle LED state
    digitalWrite(ledPin, ledState);
    delay(200); // Debounce
  }
}
