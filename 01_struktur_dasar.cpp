// ==============================================================================
// MODUL 01: STRUKTUR DASAR C++ DAN MENAMPILKAN TEKS (OUTPUT)
// ==============================================================================
// Tujuan: 
// 1. Memahami kerangka paling dasar dari program C++.
// 2. Belajar cara menampilkan teks ke layar terminal menggunakan 'cout'.
// 3. Mengetahui fungsi titik koma (;) dan pembuatan baris baru (endl / \n).
// ==============================================================================

#include <iostream> 
// Penjelasan: 
// #include adalah perintah untuk meminjam library/pustaka bawaan C++.
// <iostream> singkatan dari Input Output Stream, wajib dipanggil agar kita bisa
// menggunakan perintah mencetak (cout) dan menerima input keyboard (cin).

using namespace std;
// Penjelasan:
// Memberitahu compiler bahwa kita menggunakan standar namespace C++ (std).
// Tanpa baris ini, setiap kali mengetik 'cout' atau 'endl', kita harus menulis 
// 'std::cout' dan 'std::endl'.

int main() {
    // --------------------------------------------------------------------------
    // FUNGSI UTAMA (MAIN FUNCTION)
    // Semua program C++ PASTI mulai berjalan dari fungsi int main() ini.
    // Tanda kurung kurawal buka '{' adalah awal program, dan '}' adalah akhirnya.
    // --------------------------------------------------------------------------

    // 1. Menampilkan teks sederhana
    // 'cout' singkatan dari Character Output.
    // Tanda '<<' adalah operator pengarah teks ke layar.
    // 'endl' singkatan dari End Line (pindah ke baris baru, seperti tombol Enter).
    // Setiap baris instruksi WAJIB diakhiri tanda titik koma (;).
    cout << "Halo! Selamat datang di pembelajaran C++ Dasar." << endl;
    cout << "Belajar coding itu menyenangkan dan mudah dipahami." << endl;

    // 2. Membuat baris baru menggunakan karakter khusus "\n"
    // Selain 'endl', kita juga bisa menulis "\n" di dalam teks untuk enter.
    cout << "Baris pertama.\nBaris kedua langsung setelah enter.\n";

    // 3. Memberitahu sistem bahwa program selesai dengan sukses
    // Angka 0 menandakan program selesai tanpa error.
    return 0;
}

