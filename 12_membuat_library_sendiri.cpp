// ==============================================================================
// MODUL 12: MENGGUNAKAN LIBRARY BUATAN SENDIRI (CUSTOM HEADER FILE)
// ==============================================================================
// Tujuan:
// 1. Memahami cara memisahkan kumpulan fungsi ke file terpisah (.h).
// 2. Memahami perbedaan tanda kurung siku < > dan tanda kutip ganda " ":
//    - #include <...> -> Untuk library bawaan sistem C++ (misal: iostream, cmath).
//    - #include "..." -> Untuk library buatan sendiri di folder proyek yang sama.
// 3. Menghubungkan rumus_matematika.h ke dalam program utama main().
// ==============================================================================

#include <iostream>

// ------------------------------------------------------------------------------
// MEMANGGIL LIBRARY BUATAN KITA SENDIRI
// Perhatikan tanda petik dua ("..."): Artinya compiler akan mencari file
// 'rumus_matematika.h' di dalam satu folder yang sama dengan file ini.
// ------------------------------------------------------------------------------
#include "rumus_matematika.h"

using namespace std;

int main() {
    // 1. Memanggil fungsi dari library buatan sendiri untuk membuat tampilan rapi
    cetakGarisBintang();
    cout << "  PROGRAM UTAMA DENGAN LIBRARY SENDIRI  " << endl;
    cetakGarisBintang();

    // 2. Menggunakan fungsi luasPersegiPanjang dari file rumus_matematika.h
    int panjang = 10;
    int lebar = 4;
    int hasilPersegi = luasPersegiPanjang(panjang, lebar);

    cout << "\n[UJI COBA 1: Luas Persegi Panjang]" << endl;
    cout << "Panjang: " << panjang << ", Lebar: " << lebar << endl;
    cout << "Hasil Luas: " << hasilPersegi << " cm persegi" << endl;

    // 3. Menggunakan fungsi luasSegitiga dari file rumus_matematika.h
    double alas = 8.0;
    double tinggi = 5.5;
    double hasilSegitiga = luasSegitiga(alas, tinggi);

    cout << "\n[UJI COBA 2: Luas Segitiga]" << endl;
    cout << "Alas: " << alas << ", Tinggi: " << tinggi << endl;
    cout << "Hasil Luas: " << hasilSegitiga << " cm persegi" << endl;

    // 4. Menggunakan fungsi pembanding angka terbesar
    int angkaA = 45;
    int angkaB = 82;
    int terbesar = cariMaksimal(angkaA, angkaB);

    cout << "\n[UJI COBA 3: Mencari Nilai Maksimal]" << endl;
    cout << "Membandingkan angka " << angkaA << " dan " << angkaB << endl;
    cout << "Angka yang paling besar adalah: " << terbesar << endl;

    cetakGarisBintang();

    return 0;
}
