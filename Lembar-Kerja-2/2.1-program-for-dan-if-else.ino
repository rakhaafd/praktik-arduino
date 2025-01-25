// Definisikan pin untuk LED 1 hingga LED 6
int ledPins[] = {2, 3, 4, 5, 6, 7}; // Sesuaikan dengan pin yang Anda gunakan
void setup() {
// Set pin LED sebagai output
for (int i = 0; i < 6; i++) {
pinMode(ledPins[i], OUTPUT);
}
}
void loop() {

// a. LED menyala dari LED 1 s.d LED 6 dengan durasi 200 milidetik
for (int i = 0; i < 6; i++) {
digitalWrite(ledPins[i], HIGH); // Nyalakan LED
delay(200); // Tunggu selama 200ms
}

// b. LED mati dari LED 6 s.d LED 1 dengan durasi 200 milidetik
for (int i = 5; i >= 0; i--) {
digitalWrite(ledPins[i], LOW); // Matikan LED
delay(200); // Tunggu selama 200ms
}

// c. LED 1 s.d. LED 6 hidup dan mati secara bergantian dengan durasi 50 milidetik selama 400
milidetik
unsigned long startMillis = millis();
while (millis() - startMillis < 400) {
// Nyalakan LED 1 s.d. LED 6
for (int i = 0; i < 6; i++) {
digitalWrite(ledPins[i], HIGH); // Nyalakan LED
}
delay(50); // Tunggu 50ms
// Matikan LED 1 s.d. LED 6
for (int i = 0; i < 6; i++) {
digitalWrite(ledPins[i], LOW); // Matikan LED
}
delay(50); // Tunggu 50ms
}

// d. LED berjalan menyala mulai dari LED 1 s.d LED 6 dengan durasi 200 milidetik
for (int i = 0; i < 6; i++) {
digitalWrite(ledPins[i], HIGH); // Nyalakan LED
delay(200); // Tunggu selama 200ms
}

// e. LED berjalan menyala mulai dari LED 6 s.d LED 1 dengan durasi 200 milidetik
for (int i = 5; i >= 0; i--) {
digitalWrite(ledPins[i], HIGH); // Nyalakan LED
delay(200); // Tunggu selama 200ms
}
}