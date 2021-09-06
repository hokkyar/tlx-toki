#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

	int n, bil;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> bil;
		
		int faktor = 0;
		int divisor = 3;
		int batasBilangan = trunc(bil/2);
		
		
		while(divisor <= batasBilangan){
			if(bil % divisor == 0){
				faktor++;
				if(faktor > 2){
					break;
				}
			}
			divisor++;
		}
		if(faktor > 2){
			cout << "BUKAN" << endl;
		}else{
			cout << "YA" << endl;
		}
	}

	return 0;
}

