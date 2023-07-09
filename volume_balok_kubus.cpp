#include <iostream>
using namespace std;
int main(){
int panjang, lebar, tinggi, luas, kubus, sisi;
string dimensi;
cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout << endl;
cout << "Musukan Nilai Panjang Balok :";
cin >> panjang;
cout << "Masukan Nilai Lebar Balok:"; 
cin >> lebar;
cout << "Masukan Nilai Tinggi Balok:"; 
cin >> tinggi;
cout << "Masukan Sisi Kubus :";
cin >> sisi;
cout << "Masukan Satuan (mm,cm,m) Dimensi :";
cin >> dimensi;

kubus = (sisi*sisi*sisi);
luas = (panjang*lebar*tinggi); 

cout << "Volume Balok ="<< luas << dimensi << "3" << endl;
cout << "Volume Kubus =" << kubus << dimensi << "3" << endl;
}