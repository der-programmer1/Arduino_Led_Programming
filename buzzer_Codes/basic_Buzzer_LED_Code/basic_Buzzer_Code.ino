// define Buzzer on Pin 9
const int Buzzer = 9;

void setup() {
    // set Buzzer Pin as an OUTPUT
    pinMode(buzzer, OUTPUT);
}

void loop() {
    // buzzer Power is 0,3 KHz
    tone(buzzer, 300);
    // onTime for Buzzer are 0,3 seconds
    delay(300);
    noTone(buzzer);
    // offTime for buzzer are 0,3 seconds
    delay(300);
}
