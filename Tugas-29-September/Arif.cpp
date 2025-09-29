#include <iostream>
using namespace std;
// Arif Wicaksono

int main(){
	int bil;

	cout << "Menghitung Ganjil & Genap \n";
	cout << "Masukan Bilangan : ";
	cin >> bil;
	
	if (bil % 2 == 1){
		cout << "Bilangan : " << bil <<" adalah ganjil";
	}else {
		cout << "Bilangan : " << bil <<" adalah genap";
	}
	
	return 0;
}
