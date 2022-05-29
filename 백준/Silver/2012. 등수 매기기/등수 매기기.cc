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
	vector<int> v;
	vector<int> v2;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
		v2.push_back(i + 1);
	}

	sort(v.begin(), v.end());

	long long sum = 0;
	for (int i = 0; i < N; i++) 
		sum += abs(v[i] - v2[i]);
	
	cout << sum;
}