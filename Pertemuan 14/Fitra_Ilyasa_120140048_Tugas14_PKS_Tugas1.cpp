#include <iostream>
using namespace std;

int main(){
	int a,b;
	int x = 10;
	cout<<"Masukan jumlah baris : "; cin>>a;
	cout<<"Masukan jumlah kolom : "; cin>>b;
	int matriks[a][b];
	int hasil[a][b];
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>>matriks[i][j];
			hasil[i][j] = matriks[i][j]*x;
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
