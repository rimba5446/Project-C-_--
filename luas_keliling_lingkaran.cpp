#include <iostream>
using namespace std;

float luas_lingkaran(int jari_jari){
	float phi=3.14, luas;
	luas=phi*jari_jari*jari_jari;
	return luas;
}

float keliling_lingkaran(int jari_jari){
	float phi=3.14, keliling;
	keliling=2*phi*jari_jari;
	return keliling;
}

int main()
{
	cout<<" Menghitung Luas & Keliling Lingkaran Menggunakan Fungsi"<<endl;
	cout <<" =============================" <<endl;
    cout <<" Nama : Rimba Karang Jati "<<endl;
    cout <<" Kelas : TI-1101221042 "<<endl;
    cout <<" =============================" <<endl;

	int jari_jari;
	cout<<"Masukan Jari-jari  : ";
	cin>>jari_jari;
	
	cout<<"Luas Lingkaran     = "<<luas_lingkaran(jari_jari)<<endl;
	cout<<"Keliling Lingkaran = "<<keliling_lingkaran(jari_jari)<<endl;
}