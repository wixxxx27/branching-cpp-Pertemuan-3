// NAME : DWIYANDRA RASYHA PUTRA SYAWAL
// NPM  : 2410631170069

#include <iostream>
using namespace std;
int main()

{
    // Deklarasi variabel
    int angka1, angka2, angka3;


    // Input 3 angka

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "Masukkan angka ketiga: ";
    cin >> angka3;


    // Mencari angka terbesar di antara 3 angka yg ada
    int terbesar = angka1;


    if (angka2 > terbesar) {
        terbesar = angka2;
    }

    if (angka3 > terbesar) {
        terbesar = angka3;
    }

    // Menampilkan angka terbesar
    cout << "Angka terbesar adalah: " << terbesar << endl;

    return 0;
}
