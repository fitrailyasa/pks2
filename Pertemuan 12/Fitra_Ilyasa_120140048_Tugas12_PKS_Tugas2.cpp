#include <iostream>
using namespace std;

int main(){
	string nama[10];
	int n, i, j;
	cout << "N : ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cout << "Nama ke-" << i << " : ";
		cin >> nama[i];
	}
	for(i = 1; i < n; i++){
		for(j = i; j < n; j++){
			cout << nama[i] << " - " << nama[j+1] << endl;
		}
	}
	
	return 0;
}
