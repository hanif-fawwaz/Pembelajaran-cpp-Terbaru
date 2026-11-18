// ==============================================================================
// MODUL 09: ARRAY DASAR (LARI DATA 1 DIMENSI)
// ==============================================================================
// Tujuan:
// 1. Memahami apa itu array: 1 wadah variabel yang bisa menampung banyak data sejenis.
// 2. Mengetahui bahwa indeks (posisi) di C++ SELALU dimulai dari angka 0 (nol).
// 3. Mengkombinasikan array dengan perulangan 'for' untuk membaca semua data.
// ==============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    // --------------------------------------------------------------------------
    // 1. DEKLARASI & MENGISI ARRAY
    // Format: tipe_data namaArray[kapasitas_elemen] = {isi, isi, ...};
    // --------------------------------------------------------------------------
    
    // Array berisi 4 nama buah
    string daftarBuah[4] = {"Apel", "Mangga", "Jeruk", "Pisang"};

    // Array berisi 5 nilai ulangan
    int nilaiSiswa[5] = {80, 95, 70, 85, 90};

    // --------------------------------------------------------------------------
    // 2. MENGAKSES ELEMEN SECARA MANUAL LEWAT INDEKS
    // Ingat: Indeks dimulai dari 0!
    // Elemen ke-1 = indeks 0
    // Elemen ke-2 = indeks 1
    // Elemen ke-3 = indeks 2, dst.
    // --------------------------------------------------------------------------
    cout << "Buah pertama (indeks 0): " << daftarBuah[0] << endl;
    cout << "Buah ketiga  (indeks 2): " << daftarBuah[2] << endl;

    // Mengubah isi array
    daftarBuah[0] = "Alpukat"; // Mengganti "Apel" menjadi "Alpukat"
    cout << "Setelah diganti, buah pertama sekarang: " << daftarBuah[0] << endl;

    // --------------------------------------------------------------------------
    // 3. MEMBACA SEMUA DATA ARRAY MENGGUNAKAN FOR LOOP
    // Sangat praktis! Tidak perlu menulis cout satu per satu.
    // --------------------------------------------------------------------------
    cout << "\n=== DAFTAR SEMUA NILAI SISWA ===" << endl;
    
    int totalNilai = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Nilai ujian ke-" << (i + 1) << " = " << nilaiSiswa[i] << endl;
        totalNilai += nilaiSiswa[i]; // Menjumlahkan semua nilai
    }

    // Menghitung rata-rata nilai
    double rataRata = (double)totalNilai / 5;
    cout << "Total Keseluruhan : " << totalNilai << endl;
    cout << "Nilai Rata-rata   : " << rataRata << endl;

    return 0;
}

