#include <iostream>
#include <cmath>
using namespace std;

int asli(int angka){
        return angka > 0;
    } 
int genap(int angka){
    return angka % 2 == 0;
}
int ganjil(int angka){
    return angka % 2 != 0;
}
int prima(int angka){
   if (angka == 1 or angka == 0){
        angka = false;
    } else {
        for(int i = 2; i <= angka/2; i++){
            if (angka %i == 0){
                angka = false;
                break;
            }
        }
    }
 
}
    


int main() {
    int angka;
    cout <<" =============================" <<endl;
    cout <<" Nama : Rimba Karang Jati "<<endl;
    cout <<" Kelas : TI-1101221042 "<<endl;
    cout <<" =============================" <<endl;
    cout <<" Masukkan sebuah bilangan: ";
    cin >> angka;

     if (asli(angka)) {
        cout << angka << " adalah bilangan asli." << endl;
        if (genap(angka))
        
            cout << angka << " adalah bilangan genap." << endl;
         else 
            cout << angka << " bukan bilangan genap." << endl;

        if (ganjil(angka))
            cout << angka << " adalah bilangan ganjil." << endl;
         else 
            cout << angka << " bukan bilangan ganjil." << endl; 

        if (prima(angka))
            cout << angka << " adalah bilangan prima." << endl;
         else 
            cout << angka << " bukan bilangan prima." << endl;

        } else {
            cout << "bukan bilangan asli." << endl;
        }
        cout <<" =============================" <<endl;
   

    return 0;
}