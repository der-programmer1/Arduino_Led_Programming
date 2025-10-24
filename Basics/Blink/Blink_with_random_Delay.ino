// led is on Pin 3
const int led = 3;

void setup() {
    // led Pin(3) has Power OUTPUT
    pinMode(led, OUTPUT);
}

void loop() {
    // brightness is random
    int brightness = random(55, 255);
    // onTime is between 0,1 and 0,3 seconds
    int onTime = random(100, 300);
    // offTime is between 0,1 and 0,19 seconds
    int offTime = random(100, 190);

    analogWrite(led, brightness);
    // as delay, we take our defined onTime
    delay(onTime);
    analogWrite(LOW);
    // as delay, we take our defined offTime
    delay(offTime);
}
