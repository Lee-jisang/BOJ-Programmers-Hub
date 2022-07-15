#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int s;
	vector<int> v;
	for (int i = 0; i < 4; i++) {
		cin >> s;
		v.push_back(s);
	}

	int h;
	vector<int> v2;
	for (int i = 0; i < 2; i++) {
		cin >> h;
		v2.push_back(h);
	}

	sort(v.begin(),v.end(),greater<>());
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += v[i];
	}


	sort(v2.begin(),v2.end(),greater<>());

	cout << sum + v2[0];
}
