// ==============================================================================
// MODUL 05: LOGIKA PERCABANGAN (IF, ELSE IF, ELSE)
// ==============================================================================
// Tujuan:
// 1. Memahami cara komputer mengambil keputusan dengan IF, ELSE IF, dan ELSE.
// 2. Mengenal operator pembanding:
//    == (sama dengan)
//    != (tidak sama dengan)
//    >  (lebih besar dari)
//    <  (lebih kecil dari)
//    >= (lebih besar atau sama dengan)
//    <= (lebih kecil atau sama dengan)
// ==============================================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== PROGRAM PENENTU KELULUSAN ===" << endl;

    int nilai;
    cout << "Masukkan nilai siswa (0 - 100): ";
    cin >> nilai;

    // --------------------------------------------------------------------------
    // STRUKTUR IF - ELSE IF - ELSE
    // Komputer akan mengecek dari atas ke bawah:
    // Begitu ada kondisi yang bernilai BENAR (true), blok tersebut dijalankan,
    // dan sisa pengecekan di bawahnya langsung dilewati.
    // --------------------------------------------------------------------------

    if (nilai >= 85) {
        // Blok ini jalan jika nilai 85 ke atas
        cout << "Luar biasa! Grade kamu: A (Sangat Memuaskan)" << endl;
    } 
    else if (nilai >= 75) {
        // Blok ini jalan jika nilai antara 75 sampai 84
        cout << "Bagus! Grade kamu: B (Memuaskan)" << endl;
    } 
    else if (nilai >= 60) {
        // Blok ini jalan jika nilai antara 60 sampai 74
        cout << "Cukup. Grade kamu: C (Lulus KKM)" << endl;
    } 
    else {
        // Blok ini jalan jika SEMUA syarat di atas TIDAK terpenuhi (nilai < 60)
        cout << "Perlu perbaikan. Grade kamu: D (Harus Remedial)" << endl;
    }

    // --------------------------------------------------------------------------
    // CONTOH CEK ANGKA GENAP ATAU GANJIL
    // Menggunakan operator modulus (%) dan sama dengan (==)
    // --------------------------------------------------------------------------
    cout << "\n=== CEK BILANGAN GENAP / GANJIL ===" << endl;
    int angka;
    cout << "Masukkan sembarang bilangan bulat: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Angka " << angka << " adalah BILANGAN GENAP." << endl;
    } else {
        cout << "Angka " << angka << " adalah BILANGAN GANJIL." << endl;
    }

    return 0;
}

