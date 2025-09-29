#include <iostream>
using namespace std;

int main (){
	
	int jumlah, jumlahHitung;
	float hasil;
	cout << "Program Rata Rata" << endl;
	cout << "Masukan Jumlah Angka Yang Ingin Dihitung" << endl;
	cin >> jumlah;
	
	for (int a = 1; a <= jumlah; a++){
		int angka;
		cout << "Masukan Angka ke-"<<a <<endl;
		cin >> angka;
		jumlahHitung += angka;
	}
	hasil = jumlahHitung / jumlah;
	cout << "Rata Rata adalah: " << hasil;
	
	
	return 0;
}
