// ==============================================================================
// MODUL 11: MENGENAL LIBRARY (PUSTAKA BAWAAN C++)
// ==============================================================================
// Tujuan:
// 1. Memahami apa itu Library: Kumpulan kode dan fungsi siap pakai yang dibuat
//    oleh developer lain agar kita tidak perlu membuat semuanya dari nol.
// 2. Cara mengimpor library menggunakan perintah #include <nama_library>.
// 3. Mengenal 3 library dasar yang sangat populer dan mudah dipelajari:
//    - <cmath>   : Fungsi matematika tingkat lanjut (akar, pangkat, pembulatan).
//    - <string>  : Mengetahui panjang karakter dan manipulasi teks.
//    - <cstdlib> & <ctime> : Menghasilkan angka acak (random number), misal dadu.
// ==============================================================================

#include <iostream>
#include <cmath>    // Library untuk fungsi matematika canggih
#include <string>   // Library untuk fungsi pengolahan teks/string
#include <cstdlib>  // Library bawaan untuk fungsi rand() dan srand()
#include <ctime>    // Library waktu untuk membuat acakan angka selalu berubah

using namespace std;

int main() {
    // ==========================================================================
    // 1. CONTOH LIBRARY <cmath> (FUNGSI MATEMATIKA)
    // ==========================================================================
    cout << "=== 1. CONTOH LIBRARY <cmath> ===" << endl;

    // sqrt(x) -> Square Root (Akar Kuadrat)
    double angka = 25.0;
    cout << "Akar kuadrat dari " << angka << " adalah: " << sqrt(angka) << endl;

    // pow(alas, pangkat) -> Menghitung bilangan berpangkat (Power)
    // Contoh: 2 pangkat 3 (2 * 2 * 2 = 8)
    cout << "2 dipangkatkan 3 adalah: " << pow(2, 3) << endl;

    // round(x), ceil(x), floor(x) -> Pembulatan angka desimal
    double nilaiDesimal = 4.7;
    cout << "Angka asli      : " << nilaiDesimal << endl;
    cout << "round() (dibulatkan terdekat) : " << round(nilaiDesimal) << endl;
    cout << "ceil()  (dibulatkan ke atas)  : " << ceil(nilaiDesimal) << endl;
    cout << "floor() (dibulatkan ke bawah) : " << floor(nilaiDesimal) << endl;


    // ==========================================================================
    // 2. CONTOH LIBRARY <string> (MANIPULASI TEKS)
    // ==========================================================================
    cout << "\n=== 2. CONTOH LIBRARY <string> ===" << endl;

    string kalimat = "Belajar C++ Itu Menyenangkan";

    // .length() atau .size() -> Menghitung total jumlah karakter termasuk spasi
    cout << "Kalimat : \"" << kalimat << "\"" << endl;
    cout << "Jumlah karakter (panjang teks): " << kalimat.length() << " huruf/karakter" << endl;

    // Mengambil karakter pertama dan terakhir
    cout << "Huruf pertama : " << kalimat[0] << endl;
    cout << "Huruf terakhir: " << kalimat[kalimat.length() - 1] << endl;


    // ==========================================================================
    // 3. CONTOH LIBRARY <cstdlib> & <ctime> (ANGKA ACAK / RANDOM)
    // ==========================================================================
    cout << "\n=== 3. CONTOH ANGKA ACAK (SIMULASI LEMPAR DADU) ===" << endl;

    // srand(time(0)) -> Memberikan 'biji acakan' (seed) berdasarkan detik jam saat ini.
    // Tanpa baris ini, angka acak yang keluar akan selalu sama setiap kali program dijalankan.
    srand(time(0));

    // rand() % 6 menghasilkan rentang angka 0 sampai 5.
    // Ditambah 1 agar rentangnya menjadi 1 sampai 6 (seperti mata dadu asli).
    int mataDadu = (rand() % 6) + 1;

    cout << "Mengocok dadu..." << endl;
    cout << "Dadu berhenti di angka: [" << mataDadu << "]" << endl;

    return 0;
}
