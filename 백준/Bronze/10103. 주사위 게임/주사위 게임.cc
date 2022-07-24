#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;


	int a, b;
	int sum1 = 100;
	int sum2 = 100;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == b) {
			continue;
		}
		else if (a > b) {
			sum2 -= a;
		}
		else {
			sum1 -= b;
		}

	}
	cout << sum1 << "\n" << sum2;
}
