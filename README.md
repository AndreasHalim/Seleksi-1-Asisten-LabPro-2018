# Seleksi 1 Asisten LabPro 2018
-----------------------------------
Petunjuk:

- Silahkan fork GitHub berikut agar dapat dikerjakan pada GitHub kalian masing-masing *(private)*.
- Pembagian soal dapat dilihat pada [tautan](https://docs.google.com/spreadsheets/d/1l8SNlbK4EI8wFb5_3pDDi3IfioO7VglCcPmfFCK2jJU/edit?usp=sharing) berikut ini.
- Kerjakan persoalan berikut (sesuai dengan pembagian) menggunakan algoritma yang menurut Anda mempunyai kinerja terbaik.
- Tuliskan penjelasan algoritma tersebut beserta *source code* pada saat pengumpulan.
- Perhatikan, yang perlu dikumpulkan adalah:
  - **README.md**, tolong hapus bagian yang tidak perlu. Readme minimal berisi hal-hal berikut:
    - Keterangan pembuat (NIM dan Nama Lengkap)
    - Deskripsi semua soal yang dikerjakan
    - *Source code* solusi untuk semua soal yang dikerjakan
    - Penjelasan solusi untuk semua soal yang dikerjakan
  - Direktori **src**, berisi file-file solusi soal, dengan format nama file **X-ProblemYY.eks**
    - **X** adalah nomor bab
    - **YY** adalah nomor problem
    - **eks** adalah ekstensi file solusi (sesuai bahasa pemrograman)
    - Contoh: 4-Problem03.pas
- Pemakaian fungsi bawaan yang berlebihan tidak diperbolehkan.
- ***Deadline pull request:*** Minggu, 27 Mei 2018 pukul 23.59, dengan subjek **[NIM] - Seleksi 1 Asisten LabPro 2018** (contoh: 13515113 - Seleksi 1 Asisten LabPro 2018). Jangan lupa segera di-*public* setelah melakukan *deadline* berlalu.
- *Have a nice day!*
------

------

------

# Daftar Isi

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->


- [Bab 1 - Percabangan](#bab-1---percabangan)
  - [Problem 2](#problem-2)
- [Bab 2 - Pengulangan](#bab-2---pengulangan)
  - [Problem 1](#problem-1-1)
- [Bab 3 - Fungsi dan Prosedur](#bab-3---fungsi-dan-prosedur)
  - [Problem 12](#problem-12-2)
- [Bab 4 - *Array*](#bab-4---array)
  - [Problem 11](#problem-11-3)
- [Bab 5 - Matriks dan File Eksternal](#bab-5---matriks-dan-file-eksternal)
  - [Problem 10](#problem-10-4)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

------------------------------------
------

------

## Bab 1 - Percabangan
---------------------------------

### Problem 2
Tuan Vin ingin meminta bantuan Anda. Tuan Vin diminta untuk mengurutkan nilai ujian antara 3 orang. Ini adalah hal yang mudah, tetapi Tuan Vin perlu memeriksa ratusan orang. Karena malas, Tuan Vin meminta bantuan Anda, yang jago membuat program. Nilai ketiga orang dijamin berbeda.


**Format Input & Output (input di-*bold*)**
***
Masukan Nama 1: **Kevin**

Masukan Nilai 1: **70**

Masukan Nama 2: **Richard**

Masukan Nilai 2: **100**

Masukan Nama 3: **Albert**

Masukan Nilai 3: **80**

Peringkat pertama adalah Richard

Peringkat kedua adalah Albert

Peringkat ketiga adalah Kevin
***

---------------------------------
---------------------------------


## Bab 2 - Pengulangan
---------------------------------
### Problem 1


Karena bosan belajar, sekumpulan anak TPB memutuskan untuk bermain. Pada permainan ini, anak TPB tersebut secara bergantian menyebutkan bilangan natural secara berurutan. Namun, mereka tidak boleh menyebutkan angka kelipatan **3** atau **7**. Misal jika mereka bermain sampai angka 25, bilangan yang akan mereka ucapkan adalah sebagai berikut:
**1, 2, 4, 5, 8, 10, 11, 13, 16, 17, 19, 20, 21, 22, 23, 24, 25**


Dapat dilihat bahwa seluruh bilangan kelipatan 3 atau 7 tidak disebutkan, kecuali kelipatan 3 dan 7 (yaitu 21). Karena tidak ingin kalah terus menerus, seorang mahasiswa membuat program untuk membantunya bermain. Program tersebut menerima input berupa suatu bilangan bulat N dan mencetak seluruh angka yang harus disebutkan sampai bilangan N.


**Format Input dan Output** 
(Elemen baris setelah tanda “:” pada runtime merupakan input dari pengguna)
```
Masukan N :25  
1  
2  
4  
5  
8  
10  
11  
13  
16  
17  
19  
20  
21  
22  
23  
24  
25  
```
```
Masukan N :10  
1  
2  
4  
5  
8  
10  
```
---------------------------------

-----------------------
-----------------------
------

## Bab 3 - Fungsi dan Prosedur

### Problem 12

Saat sedang kuliah kalkulus, seorang mahasiswa mendapatkan dua buah fungsi berikut.

`f(x) = 2x − 9`

`g(x) = x^3 + 7`


Ia baru saja belajar mengenai fungsi komposisi sehingga ia ingin mencoba untuk menerapkannya pada kedua fungsi tersebut. Bantulah ia untuk menghitung nilai f(g(f(x))) diberikan nilai x!


**Format Input & Output (input di-*bold*)**
***
Masukan nilai x: **4**

f(g(f(x))) = 3
***
Masukan nilai x: **0**

f(g(f(x))) = -1453
***


Anda diwajibkan membuat fungsi f(x) dan g(x).

------------------
-----------------
------

## Bab 4 - *Array*

### Problem 11

Mei ditugaskan untuk mencatat absensi seluruh mahasiswa yang hadir. Setiap kali mahasiswa hadir, mahasiswa harus mengumpulkan kertas kehadiran berisi NIM kepada Karin. Buatlah program untuk membantu Karin mencatat berapa kali suatu mahasiswa hadir *NIM mahasiswa tidak lebih dari 3 digit*

**Format Input & Output (input di-*bold*)**
***
Masukkan jumlah kertas kehadiran : **10**

Masukkan NIM mahasiswa : 89

Masukkan NIM mahasiswa : 230

Masukkan NIM mahasiswa : 89

Masukkan NIM mahasiswa : 89

Masukkan NIM mahasiswa : 100

Masukkan NIM mahasiswa : 100

Masukkan NIM mahasiswa : 74

Masukkan NIM mahasiswa : 74

Masukkan NIM mahasiswa : 89

Rekap kehadiran mahasiswa :

74 - 2 kali

89 - 4 kali

100 - 2 kali

230 - 1 kali

***

-----------------
-----------------
## Bab 5 - Matriks dan File Eksternal

### Problem 10

Tuan Krab ingin membuka cabang baru dari Krasti Krab. Oleh karena itu, dia perlu untuk membeli bidang tanah baru. Petak-petak tanah yang tersedia direpresentasikan dalam matriks berukuran `N`x`N`. Setiap petak tanah mempunyai harga masing-masing. Untuk membangun cabang dari Krasti Krab, dibutuhkan suatu bidang tanah yang berbentuk kotak. Namun, ternyata Tuan Krab hanya membawa uang dalam pecahan `K`. Karena tidak mau rugi, maka Tuan Krab mengambil keputusan hanya akan membeli bidang tanah dengan harga total berupa kelipatan `K`. Tugas Anda adalah mencari banyaknya bidang tanah yang dapat dibeli oleh Tuan Krab.

**Format *Input* dan *Output***
*Input* berupa matriks yang merepresentasikan harga petak tanah disimpan dalam file eksternal `land.txt`. Pada file eksternal ini, baris pertama berisi bilangan bulat positif `N` yang merepresentasikan ukuran matriks. `N` baris berikutnya berisi `N` buah bilangan bulat positif yang merupakan harga petak tanah pada *cell* tersebut. Pada saat *runtime*, diinputkan bilangan bulat `K` yang merepresentasikan pecahan uang yang dibawa oleh Tuan Krab.
*Output* berupa informasi banyaknya bidang tanah yang dapat dibeli oleh Tuan Krab.

**Contoh**
(Elemen baris setelah tanda ":" pada *runtime* merupakan *input* dari  pengguna)

- land.txt

```
3
17 11 18
10 15 20
19 16 3
```

- *runtime program*

```
matriks loaded!
Pecahan uang: 4
Banyak bidang tanah yang dapat dibeli adalah 6
```

*Keterangan:*
Ada 6 buah bidang tanah yang dapat dibeli.
Bidang tanah yang tersebut yaitu

```
17 11
```

```
10 15
19 16
```

```
17 11
10 15
18 16
```

```
16
```

```
11 18
15 20
```

```
20
```

-----------------------------------
