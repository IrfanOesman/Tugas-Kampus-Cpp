#include <iostream>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		int umur;
	public:
	// constructor
	Mahasiswa(string n, int u){
		nama = n;
		umur = u;
	}
	
	// Setter
	void setNama(string n){
		nama = n;
	}
	
	Void setUmur(int u){
		umur = u;
	}
	
	// Getter
	string getNama(){
		return nama;
	}
	int getUmur(){
		return umur;
	}
	
	void tampilkanData(){
		cout << "Nama " << nama << endl;
		cout << "Umur " << umur << "Tahun"<< endl;
	}
	
	int main(){
		
		Mahasiswa mhs1("Irfan", 19);
		
		mhs1.tampilkanData();
		
		return 0;
	}
};
