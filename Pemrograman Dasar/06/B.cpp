#include <iostream>

using namespace std;

int main(){

	int n, sum = 0;
	cin >> n;
	int bebek[n];
	
	for(int i = 0; i < n; i++){
		cin >> bebek[i];
		sum = sum + bebek[i];
	}
	
	cout << sum << endl;

	return 0;
}

