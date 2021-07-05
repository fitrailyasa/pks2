#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char Kata[10];
    char Kar = 'A';
    int JumKar = 0;

    cout <<"Masukkan kalimat : ";
    cin >> Kata;
    cout << endl;
    
    for (int i = 0; i <= strlen(Kata); i++)
    {
        if (Kata[i] == Kar)
        {
            JumKar++;
        }
    }

    cout<<"Jumlah karakater A (Kapital) ada "<<JumKar<<" buah";

    return 0;
}
