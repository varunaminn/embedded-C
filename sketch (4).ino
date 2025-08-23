#define LED_PIN 9
void setup() {
    pinMode(LED_PIN, OUTPUT);
}
void loop() {
    for (int brightness = 0; brightness <= 255; brightness += 5) {
        analogWrite(LED_PIN, brightness);
        delay(50);
    }
    for (int brightness = 255; brightness >= 0; brightness -= 5) {
        analogWrite(LED_PIN, brightness);
        delay(50);
    }
}