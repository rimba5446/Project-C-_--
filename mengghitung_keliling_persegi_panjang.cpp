#include <iostream>
using namespace std;
int main(){
int panjang, lebar, tinggi, keliling;
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

keliling = 4*(panjang+lebar+tinggi); 

cout << "Keliling Persegi Panjang ="<<keliling<<"cm";
}