#include <iostream>
using namespace std;

int main(){
	int i = 0;
	float n = 5, jum = 0, x, rata;
	do{
		i++;
		cout << "Input Nilai ke-" << i << " = ";
		cin >> x;
		jum = jum + x;
	}
	while(i < n);
	rata = jum / n;
	cout << "Nilai rata-rata = " << rata << endl;
	system("pause");
	
	return 0;
}
