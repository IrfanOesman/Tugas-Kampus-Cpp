#include <iostream>
using namespace std;

int main(){
	long jam,menit,detik;
	
	cout << "Seorang Pekerja Bekerja Selama?? \n";
	cout << "Jam  : ";
	cin >> jam; 
	cout << "Menit  : ";
	cin >> menit;
	cout << "Detik  : ";
	cin >> detik;
	
	jam = jam * 3600;
	menit = menit * 60;
	detik = detik + jam + menit;
	
	cout << "Lamanya Pekerja Bekerja Selama " << detik << " Detik ";
	return 0;
}
