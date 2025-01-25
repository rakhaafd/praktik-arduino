// Deklarasi pin untuk setiap lampu
#define BRM 10  // Merah Jalan Pemuda
#define BRK 9   // Kuning Jalan Pemuda
#define BRH 8   // Hijau Jalan Pemuda
#define SM 7    // Merah Jalan Gajah Mada
#define SK 6    // Kuning Jalan Gajah Mada
#define SH 5    // Hijau Jalan Gajah Mada

void setup() {
  // Mengatur pin sebagai output
  pinMode(BRM, OUTPUT);
  pinMode(BRK, OUTPUT);
  pinMode(BRH, OUTPUT);
  pinMode(SM, OUTPUT);
  pinMode(SK, OUTPUT);
  pinMode(SH, OUTPUT);
}

void setLampState(int brm, int brk, int brh, int sm, int sk, int sh) {
  digitalWrite(BRM, brm);
  digitalWrite(BRK, brk);
  digitalWrite(BRH, brh);
  digitalWrite(SM, sm);
  digitalWrite(SK, sk);
  digitalWrite(SH, sh);
}

void loop() {
  // Langkah 0-4: BRM dan SH nyala (Jalan Pemuda Merah, Jalan Gajah Mada Hijau)
  for (int i = 0; i < 5; i++) {
    setLampState(HIGH, LOW, LOW, LOW, LOW, HIGH);
    delay(1000); // Tunggu 1000 ms (1 detik)
  }

  // Langkah 5: BRM dan SK nyala (Jalan Pemuda Merah, Jalan Gajah Mada Kuning)
  setLampState(HIGH, LOW, LOW, LOW, HIGH, LOW);
  delay(1000); // Tunggu 1000 ms (1 detik)

  // Langkah 6-14: BRH dan SM nyala (Jalan Pemuda Hijau, Jalan Gajah Mada Merah)
  for (int i = 0; i < 9; i++) {
    setLampState(LOW, LOW, HIGH, HIGH, LOW, LOW);
    delay(1000); // Tunggu 1000 ms (1 detik)
  }

  // Langkah 15: BRK dan SM nyala (Jalan Pemuda Kuning, Jalan Gajah Mada Merah)
  setLampState(LOW, HIGH, LOW, HIGH, LOW, LOW);
  delay(1000); // Tunggu 1000 ms (1 detik)
}