#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() {          // Procedur untuk input
    while (true) {
        cout << "masukan banyaknya elemen pada array : "; // output ke layar
        cin >> n;      // input dari pengguna
        if (n <= 20)   // jika n kurang dari atau sama dengan 20
            break;     // keluar dari loop
    else {             // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; //
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan Elemen Array" <<endl;
    cout << "====================" << endl;
    
    for (int i = 0; i < n; i++) {   //lopping dengan  i dimulau dari 0
        cout << "data ke -" << (i + 1) << ": ";     // output ke layar
        cin >> arr[i];                          //input dari pengguna
        }
}