#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, max = -100001, min = 100001, bil;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> bil;
		
		if(bil > max){
			max = bil;
		}
		if(bil < min){
			min = bil;
		}
	}
	cout << max << " " << min << endl;

	return 0;
}

