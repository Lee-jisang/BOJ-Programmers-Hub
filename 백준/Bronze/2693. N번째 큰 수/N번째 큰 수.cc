#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		vector<int> a;
		for (int j = 0; j < 10; j++) {
			int b;
			cin >> b;
			a.push_back(b);
		}
		sort(a.begin(), a.end(), greater<>());
		cout << a[2] << "\n";
	}

} 