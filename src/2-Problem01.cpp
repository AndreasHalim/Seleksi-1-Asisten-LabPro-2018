/**
 * BAB 2: PENGULANGAN
 * Nama Berkas : 2-Problem01.cpp
 * Nama	:	Andreas Halim
 * NIM	:	13516003
 * Deskripsi : Program untuk memilah angka yang mengandung kelipatan 3 atau kelipatan 7, tapi bukan keduanya
 **/

#include <iostream>
using namespace std;

int main() {
	int N;
	
	cout << "Masukkan N: ";
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		if ((i % 3 == 0) and (i % 7 == 0))
			cout << i << endl;
		else
			if (!((i % 3 == 0) or (i % 7 == 0)))
				cout << i << endl;
	}
	
	return 0;
}
