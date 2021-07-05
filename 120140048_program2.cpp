//120140048_Fitra_Ilyasa
#include <iostream>
using namespace std;

int main(){
	float Molaritas[2]; 
	float Molalitas[2]; 
	char ulang;
	int pilih;
	
	cout << "+======================================+" << endl;
	cout << "|        PROGRAM KIMIA DASAR 1         |" << endl;
	cout << "|       MOLARITAS DAN MOLALITAS        |" << endl;
	cout << "|      FITRA ILYASA_120140048_IF       |" << endl;
	cout << "+======================================+" << endl;
	 
	do{ 
		cout << "+======================================+" << endl;
		cout << "| Menu Pilihan                         |" << endl;
		cout << "+======================================+" << endl;
		cout << "| 1. Molaritas                         |" << endl;
		cout << "| 2. Molalitas                         |" << endl;
		cout << "+======================================+" << endl;
		cout << "Masukkan Menu Pilihan : ";
		cin >> pilih;
		
		if (pilih == 1) {
			cout << "Masukkan mol suatu zat : ";
			cin >> Molaritas[1];
			cout << "Masukkan Volume Larutan : ";
			cin >> Molaritas[2];
			// M = n/v
			cout << "Jumlah Molaritasnya adalah : " << (Molaritas[1]/Molaritas[2]);	
		}
		else if (pilih == 2) {
			cout << "Masukkan mol suatu zat : ";
			cin >> Molalitas[1];
			cout << "Masukkan massa pelarut : ";	
			cin >> Molalitas[2];
			// m = n/p
			cout << "Jumlah molalitasnya adalah : " << (Molalitas[1]/Molalitas[2]);
		}
		else{
			cout << "Inputan tidak valid!";
		}
		cout << endl << endl;
		cout << "Ingin Masuk Menu Lagi(Y/T)? " << endl;
		cin >> ulang;
		cout << endl << endl;
	}
	while (ulang == 'y' || ulang == 'Y');
	cout << endl;
	system("pause");
	return 0;
}
