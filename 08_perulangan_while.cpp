// ==============================================================================
// MODUL 08: PERULANGAN WHILE & DO-WHILE
// ==============================================================================
// Tujuan:
// 1. Memahami perulangan bersyarat (while): Periksa dulu, baru jalankan.
// 2. Memahami perulangan do-while: Jalankan minimal 1 kali dulu, baru periksa.
// 3. Menghindari 'infinite loop' (perulangan macet tak berujung).
// ==============================================================================

#include <iostream>

using namespace std;

int main() {
    // --------------------------------------------------------------------------
    // BAGIAN 1: WHILE LOOP
    // Pola pikir: "Selama kondisi bernilai benar, tolong ulangi terus."
    // --------------------------------------------------------------------------
    cout << "=== BAGIAN 1: WHILE LOOP SEDERHANA ===" << endl;
    
    int counter = 1; // 1. Variabel awal di luar loop

    while (counter <= 3) { // 2. Cek syarat sebelum masuk
        cout << "Nilai counter saat ini: " << counter << endl;
        
        counter++; // 3. PENTING! Harus ada penambahan agar perulangan bisa selesai
    }

    // --------------------------------------------------------------------------
    // BAGIAN 2: DO-WHILE LOOP
    // Perbedaannya: Blok di dalam 'do' dijamin PASTI jalan minimal 1 kali,
    // walaupun sejak awal syarat di 'while' sudah salah/false!
    // --------------------------------------------------------------------------
    cout << "\n=== BAGIAN 2: DO-WHILE LOOP (Menu Pilihan) ===" << endl;

    int pilihan;

    do {
        cout << "\n--- MENU WARUNG KOPI ---" << endl;
        cout << "1. Kopi Hitam" << endl;
        cout << "2. Teh Manis" << endl;
        cout << "3. Keluar dari Program" << endl;
        cout << "Masukkan pilihan Anda (1/2/3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << ">> Anda memesan Kopi Hitam. Selamat menikmati!" << endl;
        } else if (pilihan == 2) {
            cout << ">> Anda memesan Teh Manis. Segar sekali!" << endl;
        } else if (pilihan != 3) {
            cout << ">> Pilihan tidak dikenal, silakan coba lagi." << endl;
        }

    } while (pilihan != 3); // Ulangi terus selama pilihan BUKAN angka 3

    cout << "Terima kasih! Sampai jumpa lagi." << endl;

    return 0;
}

