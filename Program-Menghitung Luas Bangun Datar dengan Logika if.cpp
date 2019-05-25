#include <iostream>
using namespace std;

int main(){
	
	cout << "Menu UAS Sistem Informasi 2019" << endl;
	cout << "==============================" << endl;
	cout << " Menghitung Luas Bangun Datar " << endl;
	cout << "==============================" << endl;
	cout << endl;
	
	cout << "1. Luas Segitiga" << endl;
	cout << "2. Luas Lingkaran" << endl;
	cout << "3. Luas Persegi Panjang" << endl;
	cout << "4. Keluar" << endl << endl;
	
	int a,al,t,l,y,n,d,jumlah;
	cout << "Masukkan Pilihan Anda (1,,4) : " << endl;
	cin >> a;
	if(a==1){
		cout << "Masukkan Alas : ";
		cin >> al;
		cout << "Masukkan Tinggi : ";
		cin >> t;
		cout << "Luas Segitiga : " << (al*t)*0.5<< endl << endl;
		cout << "Masih lanjut (y/n)...?";
		
	}else if(a==2){
		cout << "Masukkan Alas : ";
		cin >> al;
		cout << "Masukkan Tinggi : ";
		cin >> t;
		cout << "Masukkan Diameter : ";
		cin >>d;
		cout << "Luas Lingkaran : " << al*t << endl << endl;
		cout << "Masih lanjut (y/n)...?";
	}
	
	
	return 0;
}
