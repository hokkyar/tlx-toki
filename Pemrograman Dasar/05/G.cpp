#include <iostream>

using namespace std;

int main(){

	int x1, y1, x2, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	int manhattan_x = x1-x2;
	int manhattan_y = y1-y2;
	
	if(manhattan_x < 0){
		manhattan_x = manhattan_x * -1;
	}
	
	if(manhattan_y < 0){
		manhattan_y = manhattan_y * -1;
	}
	
	cout << manhattan_x + manhattan_y << endl;
	
	return 0;
}

