#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int a;
	int b[4] = {25,10,5,1};

	for (int i = 0; i < T; i++) {	
		cin >> a;
		cout << a / b[0] << " ";
		a = a % b[0];
		cout << a / b[1] << " ";
		a = a % b[1];
		cout << a / b[2] << " ";
		a = a % b[2];
		cout << a / b[3] << "\n";
		a = a % b[3];
	}
}