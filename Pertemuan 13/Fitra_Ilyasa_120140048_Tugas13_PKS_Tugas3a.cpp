#include <iostream>
using namespace std;

int main (){
	int frek, i, X;
	int TabInt[10];	

	for (i = 0; i < 10; i++) {
		cin >> TabInt[i];
	}
	cin >> X;
	cout << "Data input: ";
	frek = 0;
	for (i = 0; i < 10; i++) {		
		if (TabInt[i] == X) {
			frek = frek + 1;
		}
	}
	cout << "Frekuensi " << X << " = " << frek << endl;
	return 0;
}
