// ==============================================================================
// MODUL 06: OPERATOR LOGIKA (AND, OR, NOT)
// ==============================================================================
// Tujuan:
// 1. Menggabungkan lebih dari satu syarat/kondisi.
// 2. Mengenal 3 operator logika utama:
//    - && (AND / DAN)    : Bernilai BENAR jika KEDUA syarat terpenuhi.
//    - || (OR / ATAU)    : Bernilai BENAR jika SALAH SATU syarat terpenuhi.
//    - !  (NOT / BUKAN)  : Membalikkan nilai logika (true jadi false, vice-versa).
// ==============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "=== SIMULASI SISTEM LOGIN SEDERHANA ===" << endl;

    string username;
    int passwordPin;

    cout << "Masukkan Username : ";
    cin >> username;

    cout << "Masukkan PIN (4 digit) : ";
    cin >> passwordPin;

    // --------------------------------------------------------------------------
    // CONTOH OPERATOR AND (&&)
    // Syarat: Username HARUS "admin" DAN PIN HARUS 1234
    // Jika salah satu salah, login akan ditolak.
    // --------------------------------------------------------------------------
    if (username == "admin" && passwordPin == 1234) {
        cout << "\n[BERHASIL] Selamat datang, Admin! Akses diterima." << endl;
    } else {
        cout << "\n[GAGAL] Username atau PIN Anda salah!" << endl;
    }

    // --------------------------------------------------------------------------
    // CONTOH OPERATOR OR (||)
    // Misal: Diskon tiket bioskop berlaku untuk anak-anak (< 12 tahun)
    // ATAU lansia (> 60 tahun).
    // --------------------------------------------------------------------------
    cout << "\n=== CEK DISKON TIKET ===" << endl;
    int usia;
    cout << "Masukkan usia penonton: ";
    cin >> usia;

    if (usia < 12 || usia > 60) {
        cout << "Selamat! Anda berhak mendapatkan TIKET DISKON KHUSUS." << endl;
    } else {
        cout << "Harga tiket NORMAL." << endl;
    }

    return 0;
}

