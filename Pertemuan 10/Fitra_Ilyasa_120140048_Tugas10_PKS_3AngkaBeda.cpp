#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	do{
		cout << "Masukkan nilai a = ";
		cin >> a;
		cout << "Masukkan nilai b = ";
		cin >> b;
		cout << "Masukkan nilai c = ";
		cin >> c;
	}
	while(a==b or b==c or a==c);
	cout << endl;
	system("pause");
	
	return 0;
}
