/**
 * BAB 4: ARRAY
 * Nama Berkas : 4-Problem11.cpp
 * Nama	:	Andreas Halim
 * NIM	:	13516003
 * Deskripsi : Program untuk menghitung jumlah kehadiran untuk setiap NIM
 **/

#include <iostream>
using namespace std;

int main() {
	int N, x;
	
	cout << "Masukkan jumlah kertas kehadiran: ";
	cin >> N;
	
	// Membuat larik jumlah kehadiran
	int NIM[1001];
	for (int i = 0; i < 1000; i++)
		NIM[i] = 0;
	
	// Memasukkan NIM ke dalam larik
	for (int i = 1; i <= N; i++) {
		cout << "Masukkan NIM mahasiswa: ";
		
		do
			cin >> x;
		while ((x > 999) or (x < 1));
		
		NIM[x]++;		// Menambahkan jumlah kehadiran pada NIM yang terpilih
	}
	
	cout << "Rekap kehadiran mahasiswa:" << endl;
	
	for (int i = 1; i < 1000; i++)
		if (NIM[i] != 0)
			cout << i << " - " << NIM[i] << " kali" << endl;
	
	return 0;
}
