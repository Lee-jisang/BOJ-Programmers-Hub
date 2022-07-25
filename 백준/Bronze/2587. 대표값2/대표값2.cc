#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> N;
		v.push_back(N);
		sum += N;
	}
	sort(v.begin(), v.end());
	cout << sum / 5 << "\n" << v[2];
}