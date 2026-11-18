# Silabus & Modul Pembelajaran C++ Dasar (Untuk Pemula)

Selamat datang di materi pengajaran C++ Dasar. Semua materi di folder ini dirancang khusus dari nol (**ground up**) dengan bahasa yang sederhana, analogi yang mudah dicerna, serta komentar penjelasan baris-demi-baris pada setiap kodenya.

---

## 🎯 Urutan Alur Pembelajaran (12 Modul)

| No | File Kode | Topik Pembelajaran | Konsep Utama yang Diajarkan |
|:---:|:---|:---|:---|
| 1 | `01_struktur_dasar.cpp` | Struktur Anatomi C++ | `#include <iostream>`, `using namespace std`, fungsi `main()`, `cout`, `endl`, titik koma `;`. |
| 2 | `02_variabel_dan_tipe_data.cpp` | Variabel & Tipe Data | Wadah memori, `int`, `double`, `char`, `string`, `bool`. |
| 3 | `03_input_keyboard_cin.cpp` | Input Interaktif Pengguna | Menerima ketikan keyboard dengan `cin >>`, perbedaan panah `<<` dan `>>`. |
| 4 | `04_operator_aritmatika.cpp` | Operator Matematika | Penjumlahan, pengurangan, perkalian, pembagian, dan sisa bagi (modulus `%`). |
| 5 | `05_percabangan_if_else.cpp` | Logika Keputusan | `if`, `else if`, `else`, operator pembanding (`==`, `!=`, `>`, `<`, `>=`, `<=`). |
| 6 | `06_operator_logika.cpp` | Kondisi Gabungan | Menggabungkan syarat dengan `&&` (AND), `||` (OR), dan `!` (NOT). |
| 7 | `07_perulangan_for.cpp` | Perulangan Hitung (For Loop) | Hitung maju, countdown, lompat kelipatan angka. |
| 8 | `08_perulangan_while.cpp` | Perulangan Bersyarat | `while` loop, `do-while` loop, dan cara mencegah infinite loop. |
| 9 | `09_array_dasar.cpp` | Kumpulan Data (Array) | Wadah jamak, indeks dimulai dari 0, membaca array menggunakan loop. |
| 10 | `10_fungsi_dasar.cpp` | Modularisasi Kode (Fungsi) | Perbedaan fungsi `void` vs ber-`return`, parameter input. |
| 11 | `11_mengenal_library.cpp` | Mengenal Library Standar | Konsep `#include`, library `<cmath>` (akar, pangkat), `<string>` (panjang teks), `<cstdlib>` & `<ctime>` (angka acak/dadu). |
| 12 | `12_membuat_library_sendiri.cpp` & `rumus_matematika.h` | Membuat Library Sendiri | Header file `.h`, `#pragma once`, perbedaan tanda kutip `#include "..."` vs siku `#include <...>`. |

---

## 🛑 Batasan Materi (Agar Pemula Tidak Bingung)

Jangan terburu-buru mengenalkan materi tingkat lanjut berikut kepada peserta sebelum 12 modul dasar di atas benar-benar dikuasai:
- ❌ **Pointer & Alamat Memori (`*` dan `&`):** Konsep ini paling sering membuat pemula menyerah. Tunda sampai materi fungsi selesai dipahami.
- ❌ **Alokasi Memori Dinamis (`malloc`, `new`, `delete`):** Belum diperlukan untuk latihan logika dasar.
- ❌ **OOP Lanjut:** Inheritance, Polymorphism, Abstract Class.
- ❌ **Pustaka STL Rumit:** Seperti `std::vector`, `std::map`, dan `iterator`.

---

## 💡 Tips Praktis Saat Mengajar

1. **Jelaskan Analogi Sehari-hari:**
   - Variabel = Kotak bertuliskan label yang hanya bisa menyimpan barang tertentu.
   - If/Else = Satpam yang memeriksa kartu identitas sebelum memperbolehkan orang masuk.
   - For Loop = Pelari yang memutari stadion dengan jumlah putaran yang sudah ditentukan.
   - Library Bawaan = Kotak perkakas yang dibeli di toko (`#include <...>`).
   - Library Sendiri = Kotak perkakas buatan tangan sendiri yang disimpan di rumah (`#include "..."`).
2. **Atasi 3 Kesalahan Umum Pemula:**
   - Lupa tanda titik koma (`;`) di akhir baris.
   - Tertukar tanda kutip satu (`' '` untuk char) dan kutip dua (`" "` untuk string).
   - Menyimpan file `.h` dan `.cpp` di folder yang berbeda (harus berada di satu folder yang sama agar mudah dipanggil).
3. **Praktik Mandiri / Mini Challenge:**
   - Minta murid menambahkan satu fungsi baru di `rumus_matematika.h` (misal: `kelilingPersegiPanjang`), lalu memanggilnya di `12_membuat_library_sendiri.cpp`.
