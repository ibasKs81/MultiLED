// Definisi Pin Lampu (Hijau, Kuning, Merah)
const int G1 = 13, Y1 = 12, R1 = 11; // Jalur Utara
const int G2 = 10, Y2 = 9,  R2 = 8;  // Jalur Timur
const int G3 = 7,  Y3 = 6,  R3 = 5;  // Jalur Selatan
const int G4 = 4,  Y4 = 3,  R4 = 2;  // Jalur Barat

void setup() {
  // Mengatur semua pin digital 2 sampai 13 sebagai OUTPUT
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Menjalankan siklus lampu hijau untuk tiap jalur secara bergantian
  jalankanLampu(G1, Y1, R1);
  jalankanLampu(G2, Y2, R2);
  jalankanLampu(G3, Y3, R3);
  jalankanLampu(G4, Y4, R4);
}

void jalankanLampu(int pinHijau, int pinKuning, int pinMerah) {
  // Pastikan semua lampu merah menyala sebagai kondisi standar
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH); digitalWrite(R4, HIGH);
  
  // Fase Hijau: Matikan merah jalur aktif, nyalakan hijau
  digitalWrite(pinMerah, LOW);
  digitalWrite(pinHijau, HIGH);
  delay(4000); // Durasi lampu hijau
  
  // Fase Kuning: Matikan hijau, nyalakan kuning
  digitalWrite(pinHijau, LOW);
  digitalWrite(pinKuning, HIGH);
  delay(2000); // Durasi lampu kuning
  
  // Kembali ke Merah: Matikan kuning, nyalakan merah
  digitalWrite(pinKuning, LOW);
  digitalWrite(pinMerah, HIGH);
