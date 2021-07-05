#include <iostream>
using namespace std;

int main (){
	int IX, X, i;
	int TabInt[10];	
	int found;
	
    for (int i=0; i<10; i++) {
		cin >> TabInt[i];
	}
	cin >> X;
	i = 10; found = false;
   	while ((i >= 0) && (!found)) {	
        if (TabInt[i]==X) {
        	found = true;
      	} else {
         	i--;
      	}
   	}
	IX = i;
   	cout << "Indeks terakhir " << X << " : " << IX << endl;
	return 0;
}
