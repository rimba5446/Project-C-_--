#include <iostream>

using namespace std;
int main(){
int berat_badan, giji, tinggi_badan, berat_ideal, tahun_lahir, tahun_sekarang, umur;
string nama;

cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout << "Masukan Nama Anda : ";
cin >> nama;
cout << "Masukan Tahun Lahir : ";
cin >> tahun_lahir;
cout << "Masukan Tahun Sekarang : ";
cin >> tahun_sekarang;
cout << "Masukan berat badan anda (kg) : ";
cin >> berat_badan;
cout << "Masukan tinggi badan anda (cm) : ";
cin >> tinggi_badan;

berat_ideal = ((tinggi_badan - 100) - (tinggi_badan - 100)* 0.1);
umur = (tahun_sekarang - tahun_lahir);

cout << "Nama Anda : " << nama <<endl;
cout << "Umur Anda :" << umur <<"Tahun"<<endl;
cout << "Berat Badan Ideal Nya :" << berat_ideal <<"kg"<<endl;
if (berat_ideal<=2 && berat_badan>=-2){
    cout << "Berat Badan Anda Ideal" <<endl;
} else {
    cout << "Berat Badan Ada Kurang Ideal" <<endl;
}
cout << "Terima Kasih Telah Malakukan Tes" <<endl;
}