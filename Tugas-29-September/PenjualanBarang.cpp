#include <iostream>
using namespace std;
//IRFAN OESMAN ASA
int main() {
    char kodeBarang;
    string namaBarang;
    int jumlah;
    int hargaBarang;
    float penjualan, diskon, totalPenjualan;

    cout << "Program Penjualan Barang" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Kode Barang (A/B/C/lainnya): ";
    cin >> kodeBarang;
    cin.ignore();
    cout << "Nama Barang : ";
    getline(cin, namaBarang);
    cout << "Jumlah      : ";
    cin >> jumlah;

    cout << "----------------------------------------" << endl;

    if (kodeBarang == 'A' || kodeBarang == 'a')
        hargaBarang = 10000;
    else if (kodeBarang == 'B' || kodeBarang == 'b')
        hargaBarang = 8000;
    else if (kodeBarang == 'C' || kodeBarang == 'c')
        hargaBarang = 6000;
    else
        hargaBarang = 4000;

    penjualan = hargaBarang * jumlah;

    if (penjualan > 100000)
        diskon = 0.1 * penjualan;
    else
        diskon = 0;

    totalPenjualan = penjualan - diskon;

    cout << "Harga Barang   : " << hargaBarang << endl;
    cout << "Penjualan      : " << penjualan << endl;
    cout << "Diskon         : " << diskon << endl;
    cout << "Total Penjualan: " << totalPenjualan << endl;

    cout << "----------------------------------------" << endl;
    cout << "Terimakasih" << endl;

    return 0;
}

