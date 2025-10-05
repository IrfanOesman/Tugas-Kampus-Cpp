#include <iostream>
using namespace std;
// IRFAN OESMAN ASA
int main() {
    string nim, nama, matakuliah;
    float Npar, NT, NQ, NUTS, NPro;
    float NA, mutu;
    string huruf;

    cout << "======================================" << endl;
    cout << "         DATA NILAI MAHASISWA         " << endl;
    cout << "======================================" << endl;

    cout << "NIM             : ";
    getline(cin, nim);
    cout << "Nama            : ";
    getline(cin, nama);
    cout << "Matakuliah      : ";
    getline(cin, matakuliah);

    cout << "Nilai Partisipasi : ";
    cin >> Npar;
    cout << "Nilai Tugas       : ";
    cin >> NT;
    cout << "Nilai Quiz        : ";
    cin >> NQ;
    cout << "Nilai UTS         : ";
    cin >> NUTS;
    cout << "Nilai Proyek      : ";
    cin >> NPro;

    NA = (0.25 * Npar) + (0.10 * NT) + (0.10 * NQ) + (0.20 * NUTS) + (0.35 * NPro);

    if (NA >= 81 && NA <= 100) {
        huruf = "A"; mutu = 4.0;
    } else if (NA >= 76 && NA <= 80.9) {
        huruf = "A-"; mutu = 3.7;
    } else if (NA >= 72 && NA <= 75.9) {
        huruf = "B+"; mutu = 3.3;
    } else if (NA >= 68 && NA <= 71.9) {
        huruf = "B"; mutu = 3.0;
    } else if (NA >= 64 && NA <= 67.9) {
        huruf = "B-"; mutu = 2.7;
    } else if (NA >= 60 && NA <= 63.9) {
        huruf = "C+"; mutu = 2.3;
    } else if (NA >= 56 && NA <= 59.9) {
        huruf = "C"; mutu = 2.0;
    } else if (NA >= 41 && NA <= 55.9) {
        huruf = "D"; mutu = 1.0;
    } else {
        huruf = "E"; mutu = 0.0;
    }

    cout << "--------------------------------------" << endl;
    cout << "Nilai Akhir  = " << NA << endl;
    cout << "Nilai Huruf  = " << huruf << endl;
    cout << "Nilai Mutu   = " << mutu << endl;
    cout << "--------------------------------------" << endl;
    return 0;
}

