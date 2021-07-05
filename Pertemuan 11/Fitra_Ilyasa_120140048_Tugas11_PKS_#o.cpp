#include <iostream>
using namespace std;

int main(){
  cout << "Masukkan tinggi kotak : ";
  int n;
  cin >> n;
   
  for (int i=0; i < n; i++){
    for (int j=0; j < n-1; j++){
      if(i % 2 == 0){
        cout <<"#";
      }
      else {
        cout <<"o";
      }
      if(i % 2 == 1){
        cout <<"#";
      }
      else {
        cout <<"o";
      }            
     }
     cout << endl;
   }
   return 0;
}
