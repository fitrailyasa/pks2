#include <iostream>
using namespace std;
int main (){
	int i, X, sum, Neff;
	int TI[100];	

	cin >> X; i = 0;
	while ((X != -999) && (i < 100)) {
		TI[i] = X;
		cin >> X;
		i++;
	}
	Neff = i;
	i = 0; sum = 0;
	while (i < Neff) {
		sum = sum + TI[i];
		i++;
	}
	cout << "Banyaknya elemen = " << Neff << endl;
	cout << "Jumlah total elemen = " << sum << endl;
	return 0;
}
