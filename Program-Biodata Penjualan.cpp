#include <iostream>

using namespace std;

void Biodata_Product(){
	cout << "Biodata Penjualan" << endl;
	string np,kp,rl,sp;
	cout << "Masukkan Nama Product : ";
	cin >> np;
	cout << "Masukkan Kode Product : ";
	cin >> kp;
	cout << "Masukkam Rak/Lokasi : ";
	cin >> rl;
	cout << "Masukkan Stock Product : ";
	cin >> sp;
}

void Penjualan_Product(){
	cout << "Pembayaran" << endl;
	int h,jp,d,p;
	cout << "Masukkan Harga : ";
	cin >> h;
	cout << "Masukkan Jumlah Pembelian : ";
	cin >> jp;
	cout << "Masukkan Discount : ";
	cin >> d;
	cout << "Total Pembayaran : " << (h*jp)-d << endl;
	
	cout << endl;
	cout << "Terima Kasih, Selamat Datang Kembali...";
}

int main(){
	
	Biodata_Product();
	cout << endl;
	Penjualan_Product();
	
	return 0;
}
