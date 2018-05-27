/**
 * BAB 1: PERCABANGAN
 * Nama Berkas : 1-Problem02.cpp
 * Nama	:	Andreas Halim
 * NIM	:	13516003
 * Deskripsi : Program untuk memeringkatkan nilai antar siswa yang ujian
 **/

#include <iostream>
using namespace std;

typedef struct {
	string Nama;
	int Nilai;
} Siswa;

int main() {
	Siswa p1, p2, p3;
	
	/* Masukan siswa pertama */
	cout << "Masukkan Nama 1: ";
	cin >> p1.Nama;
	cout << "Masukkan Nilai 1: ";
	cin >> p1.Nilai;
	
	/* Masukan siswa kedua */
	cout << "Masukkan Nama 2: ";
	cin >> p2.Nama;
	cout << "Masukkan Nilai 2: ";
	cin >> p2.Nilai;

	/* Masukan siswa ketiga */
	cout << "Masukkan Nama 3: ";
	cin >> p3.Nama;
	cout << "Masukkan Nilai 3: ";
	cin >> p3.Nilai;
	
	/* Membandingkan */
	
	string Pertama, Kedua, Ketiga;
	// P1 tertinggi
	if ((p1.Nilai >= p2.Nilai) and (p1.Nilai >= p3.Nilai)) {
		
		Pertama = p1.Nama;
		
		if (p2.Nilai >= p3.Nilai) {
			Kedua = p2.Nama;
			Ketiga = p3.Nama;
		} else {
			Kedua = p3.Nama;
			Ketiga = p2.Nama;
		}
	
	// P2 tertinggi
	} else if ((p2.Nilai >= p1.Nilai) and (p2.Nilai >= p3.Nilai)) {
	
		Pertama = p2.Nama;
		
		if (p1.Nilai >= p3.Nilai) {
			Kedua = p1.Nama;
			Ketiga = p3.Nama;
		} else {
			Kedua = p3.Nama;
			Ketiga = p1.Nama;
		}
	
	// P3 tertinggi	
	} else {
		
		Pertama = p3.Nama;
		
		if (p1.Nilai >= p2.Nilai) {
			Kedua = p1.Nama;
			Ketiga = p2.Nama;
		} else {
			Kedua = p2.Nama;
			Ketiga = p1.Nama;
		}
	}
	
	cout << "Peringkat pertama adalah " << Pertama << endl;
	cout << "Peringkat kedua adalah " << Kedua << endl;
	cout << "Peringkat ketiga adalah " << Ketiga << endl;
	
	return 0;
}
