#include <iostream>
using namespace std;

int main(){
	int m,n, x, y;
	cout<<"inputkan  baris dan kolom matrik ke-1 \n";
	cout<<"inputkan  jumlah baris : "; cin>>m;
	cout<<"inputkan jumlah kolom : "; cin>>n;
	cout<<"inputkan baris dan kolom matrik ke-2 \n";
	cout<<"inputkan jumlah baris : "; cin>>x;
	cout<<"inputkan jumlah kolom : "; cin>>y;
	int m1[m][n], m2[x][y], mhasil[m][n];
	
	if(m != x && n != y){
		cout<<"Penjumlahan tidak bisa dilakukan karena baris dan kolom tidak sama\n";
		return 0;
	}
	
	
	cout<<"inputkan data matriks ke-1\n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>m1[i][j];	
		}
	}
	cout<<"inputkan data matriks ke-2\n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>m2[i][j];	
			mhasil[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	cout<<"Hasil penjumlahannya adalah = \n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<mhasil[i][j]<<" ";
		}
		cout<<endl;
	}
}
