void setup() {
 // Set pins 1 to 6 as output
 for (int pin = 1; pin <= 6; pin++) {
 pinMode(pin, OUTPUT);
 }
}
void loop() {
 // Turn on all LEDs (pins 1 to 6) at once
 for (int pin = 1; pin <= 6; pin++) {
 digitalWrite(pin, HIGH);
 }
 // Wait for some time (adjust the delay as needed)
 delay(1000);
 // Turn off all LEDs (pins 1 to 6) at once
 for (int pin = 1; pin <= 6; pin++) {
 digitalWrite(pin, LOW);
 }
 // Wait for some time (adjust the delay as needed)
 delay(1000);
}