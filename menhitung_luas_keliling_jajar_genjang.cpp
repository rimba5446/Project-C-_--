#include <iostream>

using namespace std;

int main(){
int alas, tinggi, panjang_alas, miring;
float luas, keliling;
cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout << "Masukan Alas : ";
cin >> alas;
cout << "Masukan Tinggi : ";
cin >> tinggi;
cout << "Panjang Alas : ";
cin >> panjang_alas;
cout << "Miring : ";
cin >> miring;  

keliling = 2*(panjang_alas + miring);
luas = (alas*tinggi);

cout << "Luas jajar genjang : " << luas << endl;
cout << "Keliing Jajar genjang : " << keliling << endl;
}
