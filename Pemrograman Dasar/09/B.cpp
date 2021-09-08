#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
	
	int nilai[105], index = 0;
	
	while(scanf("%d", &nilai[index]) != EOF) {
		index++;
	}
	for(int i = index-1; i >= 0; i--){
		cout << nilai[i] << endl;
	}

	return 0;
}

