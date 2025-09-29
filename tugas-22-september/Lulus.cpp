#include <iostream>
using namespace std;
//IRFAN OESMAN ASA
int main (){
	int nilai;
	string status;
	
	cout << "===Program Kelulusan Siswa===" << endl;
	cout << "Masukan Nilai Siswa (1-100)" << endl;
	cin >> nilai;
	
	if (nilai >= 60){
		status = "lulus";
	} else {
		status = "tidak lulus";
	}
	cout << "Siswa " << status;
	return 0;
}
