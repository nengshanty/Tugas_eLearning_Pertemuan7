#include <iostream>
using namespace std;

int main() {
// KAMUS
int i, countA;
char TabChar [10];// deklarasi of character berukuran 10

//mengisi character dari masukkan pengguna
     for (i=0; i<10; i++) {
     cin >> TabChar[i];
}
//menuliskan kembali ke layar semua elemen array 
     countA=0;
     for (i=1; i<10; i++){
        cout << TabChar[i]<<endl;
        if (TabChar [i]='A'){
        countA++ ; 
        }
}
cout << "banyaknya A:"<<countA<<endl;
return 0;
}
