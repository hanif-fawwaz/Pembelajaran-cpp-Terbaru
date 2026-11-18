// ==============================================================================
// MODUL 02: VARIABEL DAN TIPE DATA DASAR
// ==============================================================================
// Tujuan:
// 1. Memahami apa itu variabel (wadah penyimpan data di memori).
// 2. Mengenal 5 tipe data paling mendasar: int, double, char, string, bool.
// 3. Cara mendeklarasikan dan memberikan nilai awal ke variabel.
// ==============================================================================

#include <iostream>
#include <string> // Wajib disertakan jika ingin memakai tipe data string (teks)

using namespace std;

int main() {
    // --------------------------------------------------------------------------
    // 1. INTEGER (int) -> Untuk bilangan bulat (tanpa desimal/koma)
    // Contoh: 1, 10, -5, 1000
    // --------------------------------------------------------------------------
    int umur = 17;
    int jumlahSiswa = 35;

    // --------------------------------------------------------------------------
    // 2. DOUBLE / FLOAT -> Untuk bilangan berkoma / pecahan (desimal)
    // Di C++, tanda koma desimal ditulis dengan titik (.)
    // --------------------------------------------------------------------------
    double tinggiBadan = 168.5;
    double nilaiRataRata = 89.75;

    // --------------------------------------------------------------------------
    // 3. CHAR -> Untuk 1 karakter tunggal (huruf, angka, atau simbol)
    // Ciri khas: Ditulis dengan tanda petik TUNGGAL (' ')
    // --------------------------------------------------------------------------
    char golonganDarah = 'O';
    char gradeUjian = 'A';

    // --------------------------------------------------------------------------
    // 4. STRING -> Untuk kalimat atau kumpulan huruf/kata
    // Ciri khas: Ditulis dengan tanda petik GANDA (" ")
    // --------------------------------------------------------------------------
    string namaLengkap = "Budi Santoso";
    string hobi = "Membaca dan Olahraga";

    // --------------------------------------------------------------------------
    // 5. BOOLEAN (bool) -> Hanya punya 2 nilai: true (benar/1) atau false (salah/0)
    // Sangat berguna untuk logika on/off atau penanda status
    // --------------------------------------------------------------------------
    bool isLulus = true;
    bool punyaSIM = false;

    // --------------------------------------------------------------------------
    // MENAMPILKAN SEMUA VARIABEL KE LAYAR
    // --------------------------------------------------------------------------
    cout << "=== BIODATA SISWA ===" << endl;
    cout << "Nama          : " << namaLengkap << endl;
    cout << "Umur          : " << umur << " tahun" << endl;
    cout << "Tinggi Badan  : " << tinggiBadan << " cm" << endl;
    cout << "Golongan Darah: " << golonganDarah << endl;
    cout << "Grade Ujian   : " << gradeUjian << endl;
    cout << "Status Lulus  : " << isLulus << " (1 = Benar/True)" << endl;
    cout << "Hobi          : " << hobi << endl;

    return 0;
}

