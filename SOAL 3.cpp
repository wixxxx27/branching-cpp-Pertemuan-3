//NAME : DWIYANDRA RAYSHA PUTRA SYAWAL
//NPM  : 2410631170069

#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double luas, sisi, panjang, lebar, alas, tinggi; //double digunakan untuk bisa memasukan angka-angka desimal

    cout << "Pilih bangun datar untuk menghitung luas:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch(pilihan)

     {
        case 1: // Menghitung luas persegi
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;


        case 2: // Menghitung luas persegi panjang
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;


        case 3: // Menghitung luas segitiga
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;



    }

    return 0;
}
