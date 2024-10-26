#include <iostream>
using namespace std;


int main() {
	 
	int tahunLahir, tahunSekarang, umur; {
		
		cout << "Masukkan tahun lahir: ";
		cin >> tahunLahir;
		cout << "Masukkan tahun sekarang ";
		cin >> tahunSekarang;

		umur = tahunSekarang - tahunLahir;
			cout << "\n";
		cout << "umur anda sekarang adalah: " << umur;

	}

	return 0;
}