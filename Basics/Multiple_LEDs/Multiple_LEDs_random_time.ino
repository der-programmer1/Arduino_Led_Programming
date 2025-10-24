const int ledPins[] = {3, 6, 9};
int numLeds = 3;

void setup() {
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
    int onTime = random(50, 200);
    int offTime = random(40, 180);

    for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(onTime);
    digitalWrite(ledPins[i], LOW);
    delay(offTime);
    }
}
