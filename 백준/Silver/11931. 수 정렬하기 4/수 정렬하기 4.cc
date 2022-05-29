#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a; 
	vector<long long> v;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < N; i++) 
		cout << v[i] << "\n";
}