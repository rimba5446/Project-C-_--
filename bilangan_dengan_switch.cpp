#include <iostream>

using namespace std;

int prima(int angka) {
    if (angka <= 1)
        return false;
    for (int i = 2; i * i <= angka; i++) {
        if (angka % i == 0)
            return false;
    }
    return true;
}

int main() {
    int pilihan;

    do {
        cout <<" =============================" <<endl;
        cout <<" Nama : Rimba Karang Jati "<<endl;
        cout <<" Kelas : TI-1101221042 "<<endl;
        cout <<" ===========================" <<endl;
        cout <<" Menu:\n";
        cout <<" 1. Bilangan Asli\n";
        cout <<" 2. Bilangan Ganjil\n";
        cout <<" 3. Bilangan Genap\n";
        cout <<" 4. Bilangan Prima\n";
        cout <<" 5. Keluar\n";
        cout <<" Pilih jenis bilangan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                cout << "Bilangan Asli: ";
                for (int i = 1; i <= 5; i++) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 2: {
                cout << "Bilangan Ganjil: ";
                for (int i = 1; i <= 5; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 3: {
                cout << "Bilangan Genap: ";
                for (int i = 2; i <= 5; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 4: {
                cout << "Bilangan Prima: ";
                for (int i = 2; i <= 5; i++) {
                    if (prima(i))
                        cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 5:
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih angka 1-5.\n";
                break;
        }

        cout << endl;
    } while (pilihan != 5);

    return 0;
}