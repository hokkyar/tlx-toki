#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int baris, kolom, matriks[100][100];
	cin >> baris >> kolom;
	
	// memasukkan nilai
	for(int i =  0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cin >> matriks[i][j];
		}
	}
	
	// rotasi nilai
	for(int i = 0; i < kolom; i++){
		for(int j = baris-1; j >= 0; j--){
			cout << matriks[j][i] << " ";
		}
		cout << endl;
	}
	
	
	

	return 0;
}

