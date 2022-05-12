#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int min = 101;
	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		int a;
		cin >> a;

		if (a % 2 == 1) {
			sum = sum + a;
			if (min >= a)
				min = a;
		}
		else 
			cnt++;	
	}
	
	if (cnt == 7)
		cout << -1;
	else
		cout << sum << "\n" << min;

}