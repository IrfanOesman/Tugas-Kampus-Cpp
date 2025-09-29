#include <iostream>
using namespace std;
//IRFAN OESMAN ASA
int main(){
	int a,b;
	string jawab;
	int temp;
	
	cout << "Program menukar isi dua buah variabel bilangan" << endl;

	cout << "Masukan variabel A : ";
	cin >> a;
	
	cout << "Masukan variabel B : ";
	cin >> b;
	
	cout << "Variabel A = " << a << " dan Variabel B = " << b << endl;

	cout << "Apakah kamu ingin menukar isi kedua variabel (y/t): ";
	cin >> jawab;
	
	while(jawab !="y" && jawab !="t"){
		cout << "Input salah! Hanya boleh 'y' atau 't'" << endl;
		cout << "Apakah kamu ingin menukar isi kedua variabel (y/t): ";
		cin >> jawab; 			
	}
	if (jawab == "y"){
		temp = a;
		a = b;
		b = temp;
		cout << "Penukaran berhasil variabel A = " << a << " dan Variabel B = " << b << endl;
	}else if(jawab == "t"){
		cout << "selesai";
	}
	return 0;
	
}
