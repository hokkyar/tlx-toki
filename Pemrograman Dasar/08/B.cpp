#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

	int n, bil;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> bil;
		bool prima = true;
		if(bil < 2){
			prima = false;
		}
		int div = 2;
		while(div < trunc(sqrt(bil))){
			if(bil % div == 0){
				prima = false;
				break;
			}
			div++;
		}
		
		if(prima){
			cout << "YA" << endl;
		}else{
			cout << "BUKAN" << endl;
		}
	}

	return 0;
}
