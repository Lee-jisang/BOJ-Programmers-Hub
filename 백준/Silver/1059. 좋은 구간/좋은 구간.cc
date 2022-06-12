#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int L;
	cin >> L; //1 ≤ L ≤ 50

	int num;
	vector<int> v;
	for (int i = 0; i < L; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	int n;
	cin >> n;//1 ≤ n ≤ (집합 S에서 가장 큰 정수)

	if (find(v.begin(), v.end(), n) != v.end()) {
		cout << 0;
	}
	else {
		if (n < v[0]) {
			int cnt = 0;
			for (int j = 1; j <= v[0] - 2; j++) {
				for (int k = j + 1; k <= v[0] - 1; k++) {
					if (j <= n && n <= k) cnt++;
				}
			}
			cout << cnt;
			return 0;
		}
		else {
			for (int i = 0; i < L - 1; i++) {
				if (v[i] < n && n < v[i + 1]) {
					int cnt = 0;
					for (int j = v[i] + 1; j <= v[i + 1] - 2; j++) {
						for (int k = j + 1; k <= v[i + 1] - 1; k++) {
							if (j <= n && n <= k) cnt++;
						}
					}
					cout << cnt;
					return 0;
				}
			}
		}

	}
}