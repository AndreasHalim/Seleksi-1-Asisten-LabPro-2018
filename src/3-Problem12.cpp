/**
 * BAB 3: FUNGSI DAN PROSEDUR
 * Nama Berkas : 3-Problem12.cpp
 * Nama	:	Andreas Halim
 * NIM	:	13516003
 * Deskripsi : Program untuk menghitung f(g(f(x))) dari fungsi f(x) dan g(x) yang telah tersedia
 **/

#include <iostream>
#include <math.h>
using namespace std;

int f(int x) {
/* Mengembalikan fungsi f(x) = 2x - 9 */
	return (2 * x - 9);
}

int g(int x) {
/* Mengembalikan nilai fungsi g(x) = x^3 + 7 */
	return (pow(x, 3) + 7);
}

int fogof(int x) {
/* Mengembalikan nilai fungsi f(g(f(x))) */
	return (f(g(f(x))));
}

int main() {
	int x;
	
	cout << "Masukkan nilai x: ";
	cin >> x;
	cout << "f(g(f(x))) = " << fogof(x) << endl;
	
	return 0;
}
