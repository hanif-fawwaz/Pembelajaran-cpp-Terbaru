// ==============================================================================
// MODUL 07: PERULANGAN FOR (FOR LOOP)
// ==============================================================================
// Tujuan:
// 1. Memahami konsep perulangan yang sudah diketahui jumlah putarannya.
// 2. Membedah 3 bagian dalam for: (inisialisasi; syarat/kondisi; perubahan langkah).
// 3. Mengamati hitung maju, hitung mundur, dan lompat angka.
// ==============================================================================

#include <iostream>

using namespace std;

int main() {
    // --------------------------------------------------------------------------
    // CONTOH 1: HITUNG MAJU DARI 1 SAMPAI 5
    // --------------------------------------------------------------------------
    cout << "=== CONTOH 1: Hitung Maju (1 s/d 5) ===" << endl;

    // Anatomi 'for':
    // 1. int i = 1  -> Mulai dari angka 1
    // 2. i <= 5     -> Ulangi terus selama i kurang dari atau sama dengan 5
    // 3. i++        -> Tambahkan i sebanyak 1 setiap selesai 1 putaran
    for (int i = 1; i <= 5; i++) {
        cout << "Putaran ke-" << i << endl;
    }

    // --------------------------------------------------------------------------
    // CONTOH 2: HITUNG MUNDUR (COUNTDOWN)
    // --------------------------------------------------------------------------
    cout << "\n=== CONTOH 2: Countdown (5 turun ke 1) ===" << endl;
    
    // i-- artinya nilai i berkurang 1 setiap putaran
    for (int i = 5; i >= 1; i--) {
        cout << i << "... ";
    }
    cout << "BOOM! Selesai." << endl;

    // --------------------------------------------------------------------------
    // CONTOH 3: KELIPATAN ANGKA (LOMPAT DUA-DUA)
    // --------------------------------------------------------------------------
    cout << "\n=== CONTOH 3: Bilangan Genap (0 s/d 10) ===" << endl;
    
    // i += 2 artinya i bertambah 2 setiap putaran (0, 2, 4, 6, 8, 10)
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

