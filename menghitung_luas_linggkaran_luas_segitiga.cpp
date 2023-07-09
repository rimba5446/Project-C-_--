#include <iostream>
using namespace std;
int main(){
int panjang, alas, tinggi, luas_segitiga;
float luas_linggkaran, jari;
cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout << endl;
cout << "Masukan Nilai Alas :"; 
cin >> alas;
cout << "Masukan Nilai Tinggi :"; 
cin >> tinggi;
cout << "Masukan Jari_jari :";
cin >> jari;

luas_segitiga = (0.5*alas*tinggi); 
luas_linggkaran = (3.14*jari*jari);

cout << "Luas Segitiga ="<<luas_segitiga<<endl;
cout << "Luas Lingkaran ="<< luas_linggkaran<<endl;
}