// ==============================================================================
// FILE HEADER / LIBRARY SENDIRI: rumus_matematika.h
// ==============================================================================
// Catatan:
// 1. Ekstensi file ini adalah .h (singkatan dari Header File), bukan .cpp.
// 2. File ini berfungsi sebagai tempat kita menyimpan kumpulan fungsi buatan
//    sendiri agar bisa dipakai ulang di file program mana pun.
// ==============================================================================

#pragma once 
// Penjelasan #pragma once:
// Perintah ini memberitahu compiler agar library ini hanya dibaca 1 kali saja.
// Ini mencegah error "fungsi terdefinisi ganda" jika nanti kodenya semakin besar.

#include <iostream>

using namespace std;

// ------------------------------------------------------------------------------
// FUNGSI 1: Mencetak garis pemisah estetik
// ------------------------------------------------------------------------------
void cetakGarisBintang() {
    cout << "****************************************" << endl;
}

// ------------------------------------------------------------------------------
// FUNGSI 2: Menghitung luas persegi panjang (panjang x lebar)
// ------------------------------------------------------------------------------
int luasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

// ------------------------------------------------------------------------------
// FUNGSI 3: Menghitung luas segitiga (0.5 x alas x tinggi)
// ------------------------------------------------------------------------------
double luasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

// ------------------------------------------------------------------------------
// FUNGSI 4: Menentukan angka terbesar dari dua buah bilangan
// ------------------------------------------------------------------------------
int cariMaksimal(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
