#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int a;
	int b[4] = {25,10,5,1};

	for (int i = 0; i < T; i++) {
		cin >> a;
		for (int j = 0; j < 4; j++) {
			cout << a / b[j] << " ";
			a = a % b[j];
		}	
		cout << "\n";		
	}
}
