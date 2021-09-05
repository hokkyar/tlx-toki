#include <iostream>

using namespace std;

int main(){

	int n; 
	
	cin >> n;
	
	if(n > 0 && n % 2 == 0){
		cout << n << endl;
	}else{
		cout << "" << endl;
	}

	return 0;
}

