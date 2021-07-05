#include <iostream>
using namespace std;

int main(){
	string nama[10], prodi[10];
	int usia[10], angkatan[10];
	float ipk[10];
	int cari;
	
	for(int i = 1; i <= 10; i++){
		cout << "Masukkan Nama : ";
		cin >> nama[i];
		cout << "Masukkan Usia : ";
		cin >> usia[i];
		cout << "Masukkan IPK : ";
		cin >> ipk[i];
		cout << "Prodi : ";
		cin >> prodi[i];
		cout << "Angkatan Tahun : ";
		cin >> angkatan[i];
	}
	
	cout << endl;
	
	cout << "Cari Berdasarkan Indeks (1-10) : ";
	cin >> cari;
	
	cout << endl;
	
	cout << "Nama : " << nama[cari] << endl;
	cout << "Usia : " << usia[cari] << endl;
	cout << "IPK : " << ipk[cari] << endl;
	cout << "Prodi : " << prodi[cari] << endl;
	cout << "Angkatan : " << angkatan[cari] << endl;
	
	return 0;
}
