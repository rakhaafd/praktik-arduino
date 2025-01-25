// Definisi pin untuk Lampu Lalu Lintas 2 (Pemuda dan Gajah Mada)
int BRM = 8; // Merah Pemuda
int BRK = 9; // Kuning Pemuda
int BRH = 10; // Hijau Pemuda
int SM = 11; // Merah Gajah Mada
int SK = 12; // Kuning Gajah Mada
int SH = 13; // Hijau Gajah Mada
void setup() {
// Inisialisasi pin sebagai output untuk Lampu Lalu Lintas 2
int pins2[] = {BRM, BRK, BRH, SM, SK, SH};
for (int i = 0; i < 6; i++) {
pinMode(pins2[i], OUTPUT);
}
}
void loop() {
lampuLaluLintas2();
}
void lampuLaluLintas2() {
// Lampu jalan Pemuda hijau, Gajah Mada merah
digitalWrite(BRM, LOW);
digitalWrite(BRK, LOW);
digitalWrite(BRH, HIGH);
digitalWrite(SM, HIGH);
digitalWrite(SK, LOW);
digitalWrite(SH, LOW);
delay(7000); // Hijau selama 7 detik
// Lampu jalan Pemuda kuning, Gajah Mada tetap merah
digitalWrite(BRM, LOW);
digitalWrite(BRK, HIGH);
digitalWrite(BRH, LOW);
delay(2000); // Kuning selama 2 detik
// Lampu jalan Gajah Mada hijau, Pemuda merah
digitalWrite(BRM, HIGH);
digitalWrite(BRK, LOW);
digitalWrite(BRH, LOW);
digitalWrite(SM, LOW);
digitalWrite(SK, LOW);
digitalWrite(SH, HIGH);
delay(3000); // Hijau selama 3 detik
// Lampu jalan Gajah Mada kuning, Pemuda tetap merah
digitalWrite(SM, LOW);
digitalWrite(SK, HIGH);
digitalWrite(SH, LOW);
delay(2000); // Kuning selama 2 detik
}