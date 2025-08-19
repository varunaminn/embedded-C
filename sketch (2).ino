#define BUTTON_PIN 2
#define LED_PIN 13
void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP); // Button with internal pull-up resistor
    pinMode(LED_PIN, OUTPUT); // LED as output
    digitalWrite(LED_PIN, LOW); // LED off initially
}
void loop() {
    if (digitalRead(BUTTON_PIN) == LOW) { // Button pressed (LOW due to pull-up)
        digitalWrite(LED_PIN, HIGH); // Turn LED on
    } else {
        digitalWrite(LED_PIN, LOW); // Turn LED off
    }
}