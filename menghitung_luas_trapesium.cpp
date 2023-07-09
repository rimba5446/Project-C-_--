#include <iostream>
using namespace std;
int main()
{

float siku1,siku2,tinggi,luas;
cout <<" =============================" <<endl;
cout <<" Nama : Rimba Karang Jati "<<endl;
cout <<" Kelas : TI-1101221042 "<<endl;
cout <<" =============================" <<endl;
cout<<"masukkan s1= ";
cin>>siku1;
cout<<"masukkan s2= ";
cin>>siku2;
cout<<"masukkan tinggi= ";
cin>>tinggi;

luas=((siku1+siku2)*tinggi)/2;
cout<<"luas trapesium adalah = "<<luas;

return 0;
}