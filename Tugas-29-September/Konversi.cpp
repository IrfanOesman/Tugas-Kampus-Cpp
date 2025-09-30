#include <iostream>
using namespace std;
// IRFAN OESMAN ASA
int main(){
	long nim;
	float tugas, quiz, partisipasi, uts, projek;
	string nama, mataKuliah;
	
	int batasBawah[] = {81, 76, 72, 68, 64, 60, 56, 41, 0};
    int batasAtas[]  = {100, 80, 75, 71, 67, 63, 59, 55, 40};
    float angkaMutu[] = {4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.0, 0.0};
    string huruf[]    = {"A", "A-", "B+", "B", "B-", "C+", "C", "D", "E"};
    string sebutan[]  = {"Sangat Istimewa", "Istimewa", "Lebih dari Baik",
                         "Baik", "Cukup Baik", "Lebih dari Cukup",
                         "Cukup", "Kurang", "Gagal"};

		
	cout << "Masukan Data Nilai Mahasiswa \n";
	cout << "\n";
		
	cout << "NIM                   : ";
	cin >> nim;
	cin.ignore();
	cout << "Nama                  : ";
	getline(cin,nama);
	cout << "Mata Kuliah           : ";
	getline(cin, mataKuliah);
	cout << "Nilai Partisipasi     : ";
	cin >> partisipasi;
	cout << "Nilai Tugas           : ";
	cin >> tugas;
	cout << "Nilai Quiz            : ";
	cin >> quiz;
	cout << "Nilai UTS             : ";
	cin >> uts;
	cout << "Nilai Projek          : ";
	cin >> projek;
	
	
    float NA = (0.25 * partisipasi) + (0.10 * tugas)
	 + (0.10 * quiz) + (0.20 * uts) + (0.35 * projek);

    int n = sizeof(batasBawah) / sizeof(batasBawah[0]);
    int i;
    for (i = 0; i < n; i++) {
        if (NA >= batasBawah[i] && NA <= batasAtas[i]) {
            break;
        }
    }
    
    cout << "\n=== Data Nilai Mahasiswa ===" << endl;
    cout << "NIM \t\t: " << nim << "\n";
    cout << "Nama \t\t: " << nama << endl;
    cout << "Mata Kuliah \t: " << mataKuliah << endl;
    cout << "Nilai Akhir \t: " << NA << endl;
    cout << "Huruf Mutu \t: " << huruf[i] << endl;
    cout << "Angka Mutu \t: " << angkaMutu[i] << endl;
    cout << "Sebutan Mutu \t: " << sebutan[i] << endl;
	
	return 0;
}
