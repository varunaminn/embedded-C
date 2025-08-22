#define SENSOR_PIN 7
void setup() {
    Serial.begin(9600);
    pinMode(SENSOR_PIN, INPUT);
}
void loop() {
    int temp = random(20, 30); // Simulate 20–30°C
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println("°C");
    delay(2000);
}