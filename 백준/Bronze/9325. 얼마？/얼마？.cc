#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {	

	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int s;
		cin >> s;

		int n;
		cin >> n;
		if (n == 0) {
			cout << s << "\n";
		}
		else {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				int p, q;
				cin >> p >> q;
				sum += p * q;
			}
			cout << s + sum << "\n";
		}




	}

}
