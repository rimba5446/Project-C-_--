#include <iostream>
#include <string>

using namespace std;
int main()
{
    string nama, npm, jurusan, alamat;
    int tahun_lahir, tahun_sekarang, usia;
    cout <<" =============================" <<endl;
    cout <<" Nama : Rimba Karang Jati "<<endl;
    cout <<" Kelas : TI-1101221042 "<<endl;
    cout <<" =============================" <<endl;
    cout << "\nBiodata Mahasiswa:\n";
    cout <<" Nama   :"; cin >> nama;
    cout <<" NPM    :"; cin >> npm;
    cout <<" Jurusan :"; cin >> jurusan;
    cout <<" Alamat  :"; cin >> alamat;
    cout <<" Tahun Lahir :"; cin >> tahun_lahir;
    cout <<" Tahun Sekarang :"; cin >> tahun_sekarang;

    usia = tahun_sekarang - tahun_lahir;

    cout << "\nBiodata Mahasiswa:\n";
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Usia: " << usia << " tahun" << endl;
    
    return 0;
}