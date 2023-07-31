#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    cout << "============================= " << endl;
    cout << "Menu Program (Early Model): " << endl;
    cout << "Nama : Rimba Karang Jati " << endl;
    cout << "Npm  : 1101221042 " << endl;
    cout << "Jurusan : Teknik informatika " << endl;
    cout << "============================= " << endl;
    cout << "1. Menentukan tipe bilangan" << endl;
    cout << "2. Menentukan tahun kabisat" << endl;
    cout << "3. Menghitung Keliling Persegi Panjang" << endl;
    cout << "4. Kalkulator sederhana" << endl;
    cout << "5. Menghitung Luas & Keliling Lingkaran" << endl;
    cout << "6. Menghitung Luas Trapesium" << endl;
    cout << "7. Menghitung Luas & Volume Tabung" << endl;
    cout << "8. Menghitung Luas dan Volume Balok" << endl;
    cout << "9. Menghitung Volume Balok dan Kubus" << endl;
    cout << "10. Input Biodata Mahasiswa" << endl;
    cout << "11. Menghitung Luas Lingkaran & Luas Segitiga" << endl;
    cout << "12. Menghitung Berat Badan Ideal, BMI=Berat(kg)/(tinggi(m))^2" << endl;
    cout << "13. Menghitung Luas Belah Ketupat" << endl;
    cout << "14. Program C++ Menentukan Bilangan Fibonacci" << endl;
    cout << "15. Program C++ Menghitung Luas & Keliling Jajar Genjang" << endl;
    cout << "16. Keluar Ege Ngapain Masih CLI udah gui oy"<< endl;
    cout << "Masukkan pilihan (1-16): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int bilangan;
            cout << "Masukkan bilangan: ";
            cin >> bilangan;
            if (bilangan > 0) {
                cout << "Bilangan asli" << endl;
                if (bilangan % 2 == 0)
                    cout << "Bilangan genap" << endl;
                else
                    cout << "Bilangan ganjil" << endl;
                // Cek bilangan prima
                bool isPrima = true;
                for (int i = 2; i <= sqrt(bilangan); i++) {
                    if (bilangan % i == 0) {
                        isPrima = false;
                       cout << endl;
                        break;
                    }
                }
                if (isPrima)
                    cout << "Bilangan prima" << endl;
                else
                    cout << "Bukan bilangan prima" << endl;
            } else {
                cout << "Bukan bilangan asli" << endl;
            }
            cout << endl;
                break;
        }
        case 2: {
            int tahun;
            cout << "Masukkan tahun: ";
            cin >> tahun;
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
                cout << "Tahun kabisat" << endl;
            else
                cout << "Bukan tahun kabisat" << endl;
            break;
        }
        case 3: {
            float panjang, lebar, keliling;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            keliling = 2 * (panjang + lebar);
            cout << "Keliling persegi panjang: " << keliling << endl;
            break;
        }
        case 4: {
            char operasi;
            float angka1, angka2, hasil;
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan operator (+, -, *, /): ";
            cin >> operasi;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
            switch (operasi) {
                case '+':
                    hasil = angka1 + angka2;
                    break;
                case '-':
                    hasil = angka1 - angka2;
                    break;
                case '*':
                    hasil = angka1 * angka2;
                    break;
                case '/':
                    hasil = angka1 / angka2;
                    break;
                default:
                    cout << "Operator tidak valid" << endl;
                    return 1;
            }
            cout << "Hasil: " << hasil << endl;
            break;
        }
        case 5: {
            float jari_jari, luas, keliling, phi = 3.14159;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jari_jari;
            luas = phi * pow(jari_jari, 2);
            keliling = 2 * phi * jari_jari;
            cout << "Luas lingkaran: " << luas << endl;
            cout << "Keliling lingkaran: " << keliling << endl;
            break;
        }
        case 6: {
            float a, b, t, luas;
            cout << "Masukkan panjang sisi atas trapesium: ";
            cin >> a;
            cout << "Masukkan panjang sisi bawah trapesium: ";
            cin >> b;
            cout << "Masukkan tinggi trapesium: ";
            cin >> t;
            luas = 0.5 * (a + b) * t;
            cout << "Luas trapesium: " << luas << endl;
            break;
        }
        case 7: {
            float jari_jari, tinggi, luas_alas, luas_permukaan, volume, phi = 3.14159;
            cout << "Masukkan jari-jari tabung: ";
            cin >> jari_jari;
            cout << "Masukkan tinggi tabung: ";
            cin >> tinggi;
            luas_alas = phi * pow(jari_jari, 2);
            luas_permukaan = 2 * phi * jari_jari * tinggi;
            volume = luas_alas * tinggi;
            cout << "Luas alas tabung: " << luas_alas << endl;
            cout << "Luas permukaan tabung: " << luas_permukaan << endl;
            cout << "Volume tabung: " << volume << endl;
            break;
        }
        case 8: {
            float panjang, lebar, tinggi, luas_permukaan, volume;
            cout << "Masukkan panjang balok: ";
            cin >> panjang;
            cout << "Masukkan lebar balok: ";
            cin >> lebar;
            cout << "Masukkan tinggi balok: ";
            cin >> tinggi;
            luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            volume = panjang * lebar * tinggi;
            cout << "Luas permukaan balok: " << luas_permukaan << endl;
            cout << "Volume balok: " << volume << endl;
            break;
        }
        case 9: {
            float sisi, luas_permukaan, volume;
            cout << "Masukkan panjang sisi kubus: ";
            cin >> sisi;
            luas_permukaan = 6 * pow(sisi, 2);
            volume = pow(sisi, 3);
            cout << "Luas permukaan kubus: " << luas_permukaan << endl;
            cout << "Volume kubus: " << volume << endl;
            break;
        }
        case 10: {
            string nama, alamat, jurusan;
            int usia;
            cout << "Masukkan nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan alamat: ";
            getline(cin, alamat);
            cout << "Masukkan jurusan: ";
            getline(cin, jurusan);
            cout << "Masukkan usia: ";
            cin >> usia;
            cout << "\nBiodata Mahasiswa:" << endl;
            cout << "Nama: " << nama << endl;
            cout << "Alamat: " << alamat << endl;
            cout << "Jurusan: " << jurusan << endl;
            cout << "Usia: " << usia << endl;
            cout << endl;
            break;
        }
        case 11: {
            float r, a, t, luas_lingkaran, luas_segitiga;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> r;
            cout << "Masukkan alas segitiga: ";
            cin >> a;
            cout << "Masukkan tinggi segitiga: ";
            cin >> t;
            luas_lingkaran = 3.14159 * pow(r, 2);
            luas_segitiga = 0.5 * a * t;
            cout << "Luas lingkaran: " << luas_lingkaran << endl;
            cout << "Luas segitiga: " << luas_segitiga << endl;
            break;
        }
        case 12: {
            float berat, tinggi, bmi;
            cout << "Masukkan berat badan (kg): ";
            cin >> berat;
            cout << "Masukkan tinggi (m): ";
            cin >> tinggi;
            bmi = berat / pow(tinggi, 2);
            cout << "BMI (Body Mass Index): " << bmi << endl;
            break;
        }
        case 13: {
            float d1, d2, luas;
            cout << "Masukkan diagonal 1: ";
            cin >> d1;
            cout << "Masukkan diagonal 2: ";
            cin >> d2;
            luas = (d1 * d2) / 2;
            cout << "Luas belah ketupat: " << luas << endl;
            break;
        }
        case 14: {
            int n;
            cout << "Masukkan jumlah bilangan Fibonacci: ";
            cin >> n;
            int fib1 = 0, fib2 = 1, nextTerm;
            cout << "Bilangan Fibonacci: ";
            for (int i = 1; i <= n; i++) {
                cout << fib1 << " ";
                nextTerm = fib1 + fib2;
                fib1 = fib2;
                fib2 = nextTerm;
            }
            cout << endl;
            break;
        }
        case 15: {
            float alas, tinggi, sisi_miring, luas, keliling;
            cout << "Masukkan panjang alas jajar genjang: ";
            cin >> alas;
            cout << "Masukkan tinggi jajar genjang: ";
            cin >> tinggi;
            cout << "Masukkan panjang sisi miring jajar genjang: ";
            cin >> sisi_miring;
            luas = alas * tinggi;
            keliling = 2 * (alas + sisi_miring);
            cout << "Luas jajar genjang: " << luas << endl;
            cout << "Keliling jajar genjang: " << keliling << endl;
            break;
        }
        
        case 16 :
        {
            cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih angka 1-5.\n";
                break;
        }

        cout << endl;
    } while (pilihan != 16);

    return 0;
}