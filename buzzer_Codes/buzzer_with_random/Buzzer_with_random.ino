// Buzzer is defined on Pin 9
const int buzzer = 9;
// onTime for buzzer us between 0,05 and 0,23 seconds long. same with offTime
int onTime = random(50, 230);
int offTIme = random(50, 230);
// OUTPUT Power for buzzer is between 0,05 and 0,35 KHz
int buzzerPower = random(50, 350);

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    // for the tone, we use our defined buzzerPower
    tone(buzzer, buzzerPower);
    // onTime also is what we defined... also offTime
    delay(onTime);
    offTone(buzzer);
    delay(offTime);
}
