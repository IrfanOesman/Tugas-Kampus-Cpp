#include <iostream>
using namespace std;


// Belajar Array
int main(){
	string cars[4] = {"Volvo", "BMW", "Mazda", "Lancer"};
	int lenght = sizeof(cars) / sizeof(cars[0]);
	for (int i = 0; i < lenght; i++){
		cout << "Mobil " << cars[i] << "\n";
	}
	return 0;
}
