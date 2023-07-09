#include <iostream>
using namespace std;

int main() {

    int n1=0, n2=1, n3, i, angka;
    cout << "Jumlah Angka: ";
    cin >> angka;
    cout << n1 << " " << n2 << " ";

    for(i=2; i<angka; ++i){
         n3 = n1+n2;
         cout << n3 << " ";
         n1 = n2;
         n2 = n3;
    }
}