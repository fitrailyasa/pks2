#include <iostream>
using namespace std;

int main(){
	string nama[10];
	int n, i, j, pilih;
	cout << "N : ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cout << "Nama ke-" << i << " : ";
		cin >> nama[i];
	}
	cout << "Nomor urut : ";
	cin >> pilih;
	cout << nama[pilih];
	
	
	return 0;
}
