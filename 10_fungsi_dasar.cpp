// ==============================================================================
// MODUL 10: FUNGSI DASAR (FUNCTIONS)
// ==============================================================================
// Tujuan:
// 1. Memahami konsep fungsi: Blok kode mandiri untuk tugas tertentu (Reusable).
// 2. Membedakan fungsi VOID (tanpa return) dan fungsi BER-RETURN VALUE.
// 3. Memahami konsep Parameter (bahan masukan ke dalam fungsi).
// ==============================================================================

#include <iostream>
#include <string>

using namespace std;

// ------------------------------------------------------------------------------
// JENIS 1: FUNGSI VOID TANPA PARAMETER
// Kata kunci 'void' berarti fungsi ini TIDAK mengembalikan nilai apapun.
// Tugasnya murni hanya menjalankan instruksi di dalamnya (misal mencetak header).
// ------------------------------------------------------------------------------
void sapaPengguna() {
    cout << "========================================" << endl;
    cout << "      SELAMAT DATANG DI PROGRAM         " << endl;
    cout << "========================================" << endl;
}

// ------------------------------------------------------------------------------
// JENIS 2: FUNGSI VOID DENGAN PARAMETER
// Menerima input 'nama', lalu mencetak salam personal.
// ------------------------------------------------------------------------------
void sapaNama(string nama) {
    cout << "Halo kawan, apa kabar, " << nama << "!" << endl;
}

// ------------------------------------------------------------------------------
// JENIS 3: FUNGSI DENGAN NILAI BALIK (RETURN VALUE)
// Di depan nama fungsi ditulis tipe data yang akan dikembalikan (misal: int).
// Fungsi ini menerima 2 angka, mengalikannya, lalu melempar hasilnya (return).
// ------------------------------------------------------------------------------
int hitungLuasPersegi(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas; // Mengembalikan hasil perhitungan keluar fungsi
}

int main() {
    // 1. Memanggil fungsi jenis 1
    sapaPengguna();

    // 2. Memanggil fungsi jenis 2 dengan mengirimkan argumen string
    sapaNama("Andi");
    sapaNama("Siti");

    cout << "\n--- PERHITUNGAN DENGAN FUNGSI RETURN ---" << endl;
    
    int p = 12;
    int l = 5;

    // 3. Memanggil fungsi jenis 3 dan menampung hasil 'return' ke variabel baru
    int hasilLuas = hitungLuasPersegi(p, l);

    cout << "Panjang = " << p << " cm" << endl;
    cout << "Lebar   = " << l << " cm" << endl;
    cout << "Luas Persegi Panjang = " << hasilLuas << " cm persegi" << endl;

    return 0;
}

