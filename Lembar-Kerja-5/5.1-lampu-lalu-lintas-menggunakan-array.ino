const int pins[6] = {2, 3, 4, 5, 6, 7};  // Array untuk pin lampu: merah_A, kuning_A, hijau_A, merah_MT, kuning_MT, hijau_MT
const int langkah_total = 16;  // Total langkah dalam tabel
int langkah = 0;

// Array status lampu pada setiap langkah (0: OFF, 1: ON)
int lampu[6][langkah_total] = {
  {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  // Lampu merah_A (A.Yani)
  {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},  // Lampu kuning_A (A.Yani)
  {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},  // Lampu hijau_A (A.Yani)
  {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0},  // Lampu merah_MT (MT. Haryono)
  {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1},  // Lampu kuning_MT (MT. Haryono)
  {0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0}   // Lampu hijau_MT (MT. Haryono)
};

void setup() {
    // Inisialisasi pin sebagai OUTPUT
    for (int i = 0; i < 6; i++) {
        pinMode(pins[i], OUTPUT);
    }
}

void loop() {
    // Reset semua lampu sebelum mengaktifkan berdasarkan tabel
    for (int i = 0; i < 6; i++) {
        digitalWrite(pins[i], LOW);
    }

    // Aktifkan lampu sesuai dengan status pada array untuk langkah saat ini
    for (int i = 0; i < 6; i++) {
        if (lampu[i][langkah] == 1) {
            digitalWrite(pins[i], HIGH);
        }
    }

    delay(1000); // Setiap langkah berjalan selama 1 detik
    langkah = (langkah + 1) % langkah_total; // Loop kembali ke langkah 0 setelah langkah 15
}
