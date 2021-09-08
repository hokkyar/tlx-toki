#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int matriks1[101][101], matriks2[101][101], hasil[101][101];

int main(){

	int N, M, P; // N baris matriks1, M kolom matriks1 dan baris matriks2, P kolom matriks2
	
	cin >> N >> M >> P;

	
	// input nilai matriks1
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> matriks1[i][j];
		}
	}
	// input nilai matriks2
	for(int i = 0; i < M; i++){
		for(int j = 0; j < P; j++){
			cin >> matriks2[i][j];
		}
	}
	
	// perkalian matriks
	for(int i = 0; i < N; i++){
		for(int j = 0; j < P; j++){
			for(int k = 0; k < M; k++){
				hasil[i][j] += matriks1[i][k] * matriks2[k][j];
			}
			
			cout << hasil[i][j];
			
			if(j != P-1){
				cout << ' ';
			}else{
				cout << endl;
			}
		}
	}
	return 0;
}

