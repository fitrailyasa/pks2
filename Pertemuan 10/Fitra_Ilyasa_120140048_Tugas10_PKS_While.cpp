#include <iostream>
using namespace std;

int main(){
	int i, nilai;
	float sum, rerata;
	sum = 0; // Inisialisasi-aksi
	i = 1; // First-element
	while(i <= 5){ // Kodisi perulangan
		cout << "Input Nilai ke-" << i << " = "; // Aksi
		cin >> nilai; // Aksi
		sum = sum + nilai; // Aksi
		i++; // Next-element
	}
	rerata = sum / 5;
	cout << "Nilai rata-rata : " << rerata << endl; //Terminasi
	return 0;
}
