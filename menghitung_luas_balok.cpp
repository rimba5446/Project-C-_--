#include <iostream>
using namespace std;
int main(){
int panjang, lebar, tinggi, luas;
cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout << endl;
cout << "Musukan Nilai Panjang :";
cin >> panjang;
cout << "Masukan Nilai Lebar   :"; 
cin >> lebar;
cout << "Masukan Nilai Tinggi  :"; 
cin >> tinggi;

luas = ((2*panjang * lebar) + (2*panjang * tinggi) + (2*tinggi * lebar));

cout << "Luas Balok ="<< luas << endl;
}