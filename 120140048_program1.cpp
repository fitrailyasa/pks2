//120140048_Fitra_Ilyasa
#include <iostream>
using namespace std;

int main(){
	int nilai[3];
	int pilih;
	char ulang;
	
	cout << "+======================================+" << endl;
	cout << "|      PROGRAM MATEMATIKA DASAR 1      |" << endl;
	cout << "|         TURUNAN DAN INTEGRAL         |" << endl;
	cout << "|      FITRA ILYASA_120140048_IF       |" << endl;
	cout << "+======================================+" << endl;
	do{	
		cout << "+======================================+" << endl;
		cout << "| Menu Pilihan                         |" << endl;
		cout << "+======================================+" << endl;
		cout << "| 1. Turunan                           |" << endl;
		cout << "| 2. Integral                          |" << endl;
		cout << "+======================================+" << endl;
		cout << "Masukkan Menu Pilihan : ";
		cin >> pilih;
		
		cout << "Masukkan Nilai A : ";
		cin >> nilai[0];
		cout << "Masukkan Nilai B : ";
		cin >> nilai[1];
		cout << "Masukkan Nilai C : ";
		cin >> nilai[2];
		
		cout << endl;
		
		cout << "Fungsi f(x) : ";
		cout << "(" << nilai[0] << "x^2) + (" << nilai[1] << "x) + (" << nilai[2] << ")" << endl;
		
		cout << endl;
		
		if(pilih == 1){
			cout << "Turunannya adalah : ";
			cout << "(" << nilai[0]*2 << "x) + (" << nilai[1] << ")";
		}
		else if(pilih == 2){
			cout << "Integralnya adalah : ";
			cout << "(" << nilai[0]/3 << "x^2) + (" << nilai[1]/2 << "x) + (" << nilai[2] << ")";
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



