// ==============================================================================
// MODUL 04: OPERATOR ARITMATIKA (KALKULATOR DASAR)
// ==============================================================================
// Tujuan:
// 1. Memahami simbol matematika dasar di C++: +, -, *, /, % (modulus/sisa bagi).
// 2. Memahami perilaku pembagian bulat vs pembagian desimal.
// ==============================================================================

#include <iostream>

using namespace std;

int main() {
    cout << "=== KALKULATOR MATEMATIKA DASAR ===" << endl;

    double angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua  : ";
    cin >> angka2;

    // 1. Penjumlahan (+)
    double tambah = angka1 + angka2;

    // 2. Pengurangan (-)
    double kurang = angka1 - angka2;

    // 3. Perkalian (*) menggunakan simbol bintang
    double kali = angka1 * angka2;

    // 4. Pembagian (/) menggunakan garis miring
    double bagi = angka1 / angka2;

    cout << "\n--- HASIL PERHITUNGAN ---" << endl;
    cout << angka1 << " + " << angka2 << " = " << tambah << endl;
    cout << angka1 << " - " << angka2 << " = " << kurang << endl;
    cout << angka1 << " * " << angka2 << " = " << kali << endl;
    cout << angka1 << " / " << angka2 << " = " << bagi << endl;

    // --------------------------------------------------------------------------
    // 5. MODULUS (%) -> Sisa Hasil Pembagian (Khusus Bilangan Bulat / int)
    // Contoh: 10 % 3 = 1 (karena 10 dibagi 3 menghasilkan 3 sisa 1)
    // --------------------------------------------------------------------------
    cout << "\n--- PENJELASAN KHUSUS OPERATOR MODULUS (%) ---" << endl;
    int a = 17;
    int b = 5;
    int sisaBagi = a % b;

    cout << "Contoh: " << a << " % " << b << " = " << sisaBagi << endl;
    cout << "(Artinya: 17 dibagi 5 adalah 3, bersisa " << sisaBagi << ")" << endl;

    return 0;
}

