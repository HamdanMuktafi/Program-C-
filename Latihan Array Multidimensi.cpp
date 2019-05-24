#include <iostream>
using namespace std;

int main(){
	int NA[2][2];
	int NA2[2][2];
	
	cout << "## Matrix 1 ##" << endl;
	for(int a=0; a<2; a++){
		for(int b = 0; b < 2; b++){
			cout <<"Masukkan Index 1 ["<<a<<","<<b<<"] : ";
			cin>>NA[a][b];
		}
	}
	
	cout << "\n";
	
    cout << "## Matrix 2 ##" << endl;	
	for(int c=0; c<2; c++){
		for(int d=0; d<2; d++){
			cout <<"Masukkan Index 2 ["<<c<<","<<d<<"] : ";
			cin>>NA2[c][d];
		}
	}
	
	cout << "## Matrix Hasil ##" << endl;
	for(int x=0; x<2; x++){
		cout << "[ ";
		for(int y=0; y<2; y++){
			cout << NA[x] [y]+NA2[x] [y]<< " ";
		}cout << "]";
		cout << endl;
	}
	
	return 0;
}
