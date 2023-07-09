#include <iostream>
using namespace std;

int tambah(int a, int b) {
   return a + b;
}

int kurang(int a, int b) {
   return a - b;
}

int kali(int a, int b) {
   return a * b;
}

int bagi(int a, int b) {
   return a / b;
}

int main() {
   int a, b, hasil;
   char operasi;

    cout <<" =============================" <<endl;
    cout <<" Nama : Rimba Karang Jati "<<endl;
    cout <<" Kelas : TI-1101221042 "<<endl;
    cout <<" ===========================" <<endl;
    cout << endl;

   cout << "Masukkan angka pertama: ";
   cin >> a;

   cout << "Masukkan operator (+, -, *, /): ";
   cin >> operasi;

   cout << "Masukkan angka kedua: ";
   cin >> b;

   if (operasi == '+') {
      hasil = tambah(a, b);
   } else if (operasi == '-') {
      hasil = kurang(a, b);
   } else if (operasi == '*') {
      hasil = kali(a, b);
   } else if (operasi == '/') {
      hasil = bagi(a, b);
   }

   cout << "Hasilnya adalah: " << hasil << endl;

   return 0;
}