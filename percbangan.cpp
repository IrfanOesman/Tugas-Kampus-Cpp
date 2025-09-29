#include <iostream>
using namespace std;

int main(){
	int kode, harga;
	string baju;
	char ukuran;
	
	cout << "Masukan Kode Baju (1/2/3): ";
	cin >> kode;
	
	if (kode != 1 && kode != 2 && kode != 3){
		cout << "kode salah";
		return 0;
	}
	
	cout << "Masukan Ukuran Baju (S/M/L):";
	cin >> ukuran;
	cout << "\n";
	
	if (kode == 1){
		baju = "IMP";
		if (ukuran == 's' || ukuran == 'S'){
			harga = 200000;
		}else if (ukuran == 'm' || ukuran == 'M'){
			harga = 220000;
		}else {
			harga = 250000;
		}
	}else if(kode == 2){
			baju = "Prada";
		if (ukuran == 's' || ukuran == 'S'){
			harga = 150000;
		}else if (ukuran == 'm' || ukuran == 'M'){
			harga = 160000;
		}else {
			harga = 170000;
		}
	}else if(kode == 3){
			baju = "Gucci";
			harga = 200000;
	}
	cout << "====Struk Pembelian==== \n";
	cout << "Merk Baju : " << baju << "\n";
	cout << "Ukuran Baju : " << ukuran << "\n";
	cout << "Harga Baju : " << harga << "\n";
	
	return 0;
}
