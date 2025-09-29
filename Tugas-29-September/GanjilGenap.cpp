#include <iostream>
using namespace std;
//IRFAN OESMAN ASA
int main(){
	int angka;

	cout << "Program Ganjil & Genap \n";
	cout << "Masukan Bilangan : ";
	cin >> angka;
	
	if (angka %2 == 1){
		cout << angka <<" adalah bilangan ganjil";
	}else {
		cout << angka <<" adalah bilangan genap";
	}
	
	return 0;
}
