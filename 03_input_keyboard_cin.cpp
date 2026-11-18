// ==============================================================================
// MODUL 03: MEMBACA INPUT DARI KEYBOARD (CIN)
// ==============================================================================
// Tujuan:
// 1. Memahami cara program berinteraksi dengan pengguna.
// 2. Menggunakan 'cin' untuk memasukkan data lewat keyboard ke dalam variabel.
// 3. Mengamati perbedaan tanda panah: 'cout <<' (keluar) vs 'cin >>' (masuk).
// ==============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Menyiapkan variabel kosong untuk menampung ketikan pengguna
    string namaDepan;
    int tahunLahir;
    double uangSaku;

    cout << "=== PROGRAM PENDAFTARAN ANGGOTA ===" << endl;

    // 1. Meminta input nama depan
    // Catatan: cin >> namaDepan hanya membaca satu kata (berhenti jika ada spasi).
    cout << "Masukkan nama depan kamu: ";
    cin >> namaDepan;

    // 2. Meminta input angka bulat
    cout << "Masukkan tahun kelahiranmu: ";
    cin >> tahunLahir;

    // 3. Meminta input angka desimal
    cout << "Berapa uang saku harianmu (Rp): ";
    cin >> uangSaku;

    // --------------------------------------------------------------------------
    // MENGHITUNG SESUATU DARI DATA INPUT
    // Misal menghitung estimasi usia di tahun 2026
    // --------------------------------------------------------------------------
    int estimasiUsia = 2026 - tahunLahir;

    // --------------------------------------------------------------------------
    // MENAMPILKAN KEMBALI DATA HASIL INPUT
    // --------------------------------------------------------------------------
    cout << "\n------------------------------------" << endl;
    cout << "Halo, " << namaDepan << "!" << endl;
    cout << "Tahun lahir kamu : " << tahunLahir << endl;
    cout << "Usia kamu saat ini kira-kira : " << estimasiUsia << " tahun." << endl;
    cout << "Uang saku harian: Rp " << uangSaku << endl;
    cout << "------------------------------------" << endl;

    return 0;
}

