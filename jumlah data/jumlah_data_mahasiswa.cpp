#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int nilai;
    string status;
};

int main() {
    const int MAX_DATA = 100; 
    Mahasiswa dataMahasiswa[MAX_DATA]; 
    int jumlahData;

    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> jumlahData;

    for (int i = 0; i < jumlahData; i++) {
        cin.ignore();
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: ";
        getline(cin, dataMahasiswa[i].nama);
        cout << "Nilai: ";
        cin >> dataMahasiswa[i].nilai;
        dataMahasiswa[i].status = (dataMahasiswa[i].nilai >= 60) ? "Lulus" : "Tidak Lulus";
        cout << endl;
    }

    cout << "Tabel Data Mahasiswa" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| No. |    Nama    | Nilai |   Status   |" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < jumlahData; i++) {
        printf("| %-3d | %-10s | %-5d | %-10s |\n", i + 1, dataMahasiswa[i].nama.c_str(), dataMahasiswa[i].nilai, dataMahasiswa[i].status.c_str());
    }
    cout << "----------------------------------------" << endl;

    return 0;
}
