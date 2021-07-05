#include <iostream>
using namespace std;

int main(){
	int m,n;
	cout<<"Inputkan jumlah baris : "; cin>>m;
	cout<<"Inputkanjumlah kolom : "; cin>>n;
	int matriks[m][n];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>matriks[i][j];
		}
	}
	cout<<"Hasil tranposenya adalah = "<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<matriks[j][i]<<" ";
		}
		cout<<endl;
	}
}
