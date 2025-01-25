// Definisi pin untuk Lampu Lalu Lintas 1 (MT. Haryono dan Ahmad Yani)
int M1 = 2; // Merah MT. Haryono
int K1 = 3; // Kuning MT. Haryono
int H1 = 4; // Hijau MT. Haryono
int M2 = 5; // Merah Ahmad Yani
int K2 = 6; // Kuning Ahmad Yani
int H2 = 7; // Hijau Ahmad Yani
void setup() {
// Inisialisasi pin sebagai output untuk Lampu Lalu Lintas 1
int pins1[] = {M1, K1, H1, M2, K2, H2};
for (int i = 0; i < 6; i++) {
pinMode(pins1[i], OUTPUT);
}
}
void loop() {
lampuLaluLintas1();
}
void lampuLaluLintas1() {
// Lampu jalan MT. Haryono hijau, Ahmad Yani merah
digitalWrite(M1, LOW);
digitalWrite(K1, LOW);
digitalWrite(H1, HIGH);
digitalWrite(M2, HIGH);
digitalWrite(K2, LOW);
digitalWrite(H2, LOW);
delay(5000); // Hijau selama 5 detik
// Lampu jalan MT. Haryono kuning, Ahmad Yani tetap merah
digitalWrite(M1, LOW);
digitalWrite(K1, HIGH);
digitalWrite(H1, LOW);
delay(2000); // Kuning selama 2 detik
// Lampu jalan Ahmad Yani hijau, MT. Haryono merah
digitalWrite(M1, HIGH);
digitalWrite(K1, LOW);
digitalWrite(H1, LOW);
digitalWrite(M2, LOW);
digitalWrite(K2, LOW);
digitalWrite(H2, HIGH);
delay(5000); // Hijau selama 5 detik
// Lampu jalan Ahmad Yani kuning, MT. Haryono tetap merah
digitalWrite(M2, LOW);
digitalWrite(K2, HIGH);
digitalWrite(H2, LOW);
delay(2000); // Kuning selama 2 detik
}