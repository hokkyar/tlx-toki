#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	// MODUS
	int n, nilai[100000], modus, count, M = 1;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> nilai[i];
	}
	
	modus = nilai[0];
	for(int i = 0; i < n; i++){
		if(nilai[i] > 0){
			count = 1;
			for(int j = i+1; j < n; j++){
				if(nilai[i] == nilai[j]){
					nilai[j] = 0;
					count++;
				}
			}
			if(count > M){
				M = count; 
				modus = nilai[i];
			}else{
				if(count == M){
					if(nilai[i] > modus){
						M = count;
						modus = nilai[i];
					}
				}
			}
		}
	}
	cout << modus << endl;
	return 0;
}










