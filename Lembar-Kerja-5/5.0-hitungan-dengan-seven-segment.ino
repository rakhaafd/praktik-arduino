// dari angka 9-0

// Inisialisasi angka 0 s.d 9 dengan menggunakan array
// 0 menyatakan pin yang sesuai akan mati, 1 menyatakan pin akan menyala
int num_array[10][7] = {
  {1,1,1,1,1,1,0}, // angka 0
  {0,1,1,0,0,0,0}, // angka 1
  {1,1,0,1,1,0,1}, // angka 2
  {1,1,1,1,0,0,1}, // angka 3
  {0,1,1,0,0,1,1}, // angka 4
  {1,0,1,1,0,1,1}, // angka 5
  {1,0,1,1,1,1,1}, // angka 6
  {1,1,1,0,0,0,0}, // angka 7
  {1,1,1,1,1,1,1}, // angka 8
  {1,1,1,1,0,1,1}  // angka 9
};

int pinSegmen[7] = {2,3,4,5,6,7,8}; // Pin untuk 7-segment
int i;

void setup() {
  // Konfigurasi pin sebagai OUTPUT dan atur kondisi awal LOW
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  // Tampilkan angka dari 9 ke 0 dengan jeda 3 detik
  for (i = 9; i >= 0; i--) {
    Num_Write(i);
    delay(3000);
  }
}

// Fungsi untuk menampilkan angka pada 7-segment
void Num_Write(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pinSegmen[i], num_array[number][i]);
  }
}


// dari angka 0-9

// Inisialisasi angka 0 s.d 9 dengan menggunakan array
// 0 menyatakan pin yang sesuai akan mati, 1 menyatakan pin akan menyala
int num_array[10][7] = {
  {1,1,1,1,1,1,0}, // angka 0
  {0,1,1,0,0,0,0}, // angka 1
  {1,1,0,1,1,0,1}, // angka 2
  {1,1,1,1,0,0,1}, // angka 3
  {0,1,1,0,0,1,1}, // angka 4
  {1,0,1,1,0,1,1}, // angka 5
  {1,0,1,1,1,1,1}, // angka 6
  {1,1,1,0,0,0,0}, // angka 7
  {1,1,1,1,1,1,1}, // angka 8
  {1,1,1,1,0,1,1}  // angka 9
};

int pinSegmen[7] = {2,3,4,5,6,7,8}; // Pin untuk 7-segment
int i;

void setup() {
  // Konfigurasi pin sebagai OUTPUT dan atur kondisi awal LOW
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  // Tampilkan angka dari 0 ke 9 dengan jeda 3 detik
  for (i = 0; i <= 9; i++) {
    Num_Write(i);
    delay(3000);
  }
}

// Fungsi untuk menampilkan angka pada 7-segment
void Num_Write(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pinSegmen[i], num_array[number][i]);
  }
}