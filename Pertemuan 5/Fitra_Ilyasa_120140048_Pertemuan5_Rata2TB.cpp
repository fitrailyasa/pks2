// 120140048
#include <iostream>
using namespace std;

int main(){
	float a, b, c, d, e;
	float rata;
	
	cout << "PROGRAM HITUNG RATA-RATA TINGGI MAHASISWA " << endl;
	cout << "Masukan tinggi 5 orang mahasiswa: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	
	rata = (a + b + c + d + e)/5;
	
	cout << "Jadi rata-rata tinggi dari 5 orang mahasiswa adalah: " << rata;
	
	cout << endl;
	system("pause");
	return 0;
}
