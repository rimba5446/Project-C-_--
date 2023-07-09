#include <iostream>
 
using namespace std;

  
int tahun_kabisat (int tahun){
    return tahun % 400 == 0;
}

int tahun_nonkabisat (int tahun){
    return tahun % 100 == 0;
    
}

int tahun_kabisat2 (int tahun){
    return tahun % 4 == 0;
}


int main()
{
    cout <<" =============================" <<endl;
    cout <<" Nama : Rimba Karang Jati "<<endl;
    cout <<" Kelas : TI-1101221042 "<<endl;
    cout <<" ===========================" <<endl;
    cout << endl;
 
  int tahun;
 
  cout << "Input Tahun: ";
  cin >> tahun;
 
   if (tahun_kabisat(tahun)) {
     cout << tahun << " adalah tahun kabisat";
   }
   else if (tahun_nonkabisat(tahun)) {
     cout << tahun << " bukan tahun kabisat";
   }
   else if (tahun_kabisat2(tahun)) {
     cout << tahun << " adalah tahun kabisat";
   }
   else {
     cout << tahun << " bukan tahun kabisat";
   }
 
  cout << endl;
  return 0;
}
