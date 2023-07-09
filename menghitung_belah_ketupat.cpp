#include <iostream>

using namespace std;

int main (){
    int d1, d2;
    float luas;
    cout << "Masukan Diagonal 1 : "; cin >> d1;
    cout << "Masukan Diagonal 2 : "; cin >> d2;

    luas = ((d1*d2)/2);

    cout << "Luas Belah Ketupat : " << luas << endl;
}