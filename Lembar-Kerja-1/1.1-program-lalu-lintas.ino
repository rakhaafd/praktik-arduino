// Deklarasi pin untuk setiap lampu
#define M1 10  // Merah Jalan A. Yani
#define K1 9   // Kuning Jalan A. Yani
#define H1 8   // Hijau Jalan A. Yani
#define M2 7   // Merah Jalan MT. Haryono
#define K2 6   // Kuning Jalan MT. Haryono
#define H2 5   // Hijau Jalan MT. Haryono

void setup() {
  // Mengatur pin sebagai output
  pinMode(M1, OUTPUT);
  pinMode(K1, OUTPUT);
  pinMode(H1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(K2, OUTPUT);
  pinMode(H2, OUTPUT);
}

void setLampState(int m1, int k1, int h1, int m2, int k2, int h2) {
  digitalWrite(M1, m1);
  digitalWrite(K1, k1);
  digitalWrite(H1, h1);
  digitalWrite(M2, m2);
  digitalWrite(K2, k2);
  digitalWrite(H2, h2);
}

void loop() {
  // Langkah 1: Jalan A. Yani Hijau, Jalan MT. Haryono Merah
  setLampState(LOW, LOW, HIGH, HIGH, LOW, LOW);
  delay(5000); // Tunggu 5000 ms (5 detik)

  // Langkah 2: Jalan A. Yani Kuning, Jalan MT. Haryono Merah
  setLampState(LOW, HIGH, LOW, HIGH, LOW, LOW);
  delay(2000); // Tunggu 2000 ms (2 detik)

  // Langkah 3: Jalan A. Yani Merah, Jalan MT. Haryono Hijau
  setLampState(HIGH, LOW, LOW, LOW, LOW, HIGH);
  delay(5000); // Tunggu 5000 ms (5 detik)

  // Langkah 4: Jalan A. Yani Merah, Jalan MT. Haryono Kuning
  setLampState(HIGH, LOW, LOW, LOW, HIGH, LOW);
  delay(2000); // Tunggu 2000 ms (2 detik)
}