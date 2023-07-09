#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Luas Permukaan dan Volume Tabung" << endl;
  cout <<" =============================" <<endl;
  cout <<" Nama : Rimba Karang Jati "<<endl;
  cout <<" Kelas : TI-1101221042 "<<endl;
  cout <<" =============================" <<endl;
  cout << endl;
 
  float jari2, tinggi;
 
  cout << "Input jari-jari tabung: ";
  cin >> jari2;
  cout << "Input tinggi tabung: ";
  cin >> tinggi;
  cout << endl;
 
  cout << "Luas permukaan tabung = "
       << 2 * (22.0/7.0) * jari2 * (jari2 + tinggi) << endl;
 
  cout << "Volume tabung = "
       << (22.0/7.0) * tinggi * jari2 * jari2 << endl;
 
  return 0;
}