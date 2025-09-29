#include <iostream>
#include <string>
using namespace std;

int main() {
    int kode;
    string ukuran;
    string merk;
    long harga = 0;

    cout << "Masukkan kode baju (1-3): ";
    cin >> kode;
    cout << "Masukkan ukuran baju (S/M/L): ";
    cin >> ukuran;

    if (kode == 1) {
        merk = "IMP";
        if (ukuran == "S" || ukuran == "s") {
            harga = 200000;
        } else if (ukuran == "M" || ukuran == "m") {
            harga = 220000;
        } else {
            harga = 250000;
        }
    } 
    else if (kode == 2) {
        merk = "Prada";
        if (ukuran == "S" || ukuran == "s") {
            harga = 150000;
        } else if (ukuran == "M" || ukuran == "m") {
            harga = 160000;
        } else {
            harga = 170000;
        }
    } 
    else if (kode == 3) {
        merk = "Gucci";
        if (ukuran == "S" || ukuran == "s") {
            harga = 200000;
        } else if (ukuran == "M" || ukuran == "m") {
            harga = 200000;
        } else {
            harga = 200000;
        }
    } 
    else {
        cout << "Salah kode!" << endl;
    }

    cout << "\n=== Detail Pembelian ===" << endl;
    cout << "Merk Baju  : " << merk << endl;
    cout << "Ukuran Baju: " << ukuran << endl;
    cout << "Harga Baju : Rp " << harga << endl;

    
}
