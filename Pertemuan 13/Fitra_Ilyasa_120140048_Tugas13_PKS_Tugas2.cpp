#include <iostream>
using namespace std;
int main (){
	int idxmin, i;
	int TabInt[10];
	
	idxmin = 0;
	for (i = 1; i < 10; i++) {
		if (TabInt[i] < TabInt[idxmin]) {
			idxmin = i;
		}
	}
	cout << "Index nilai minimum: " << idxmin <<
	endl;
	return 0;
}
