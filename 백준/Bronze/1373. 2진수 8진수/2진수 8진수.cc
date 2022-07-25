#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string b;
	cin >> b;

	int len = 3 - b.length() % 3;
	if (len != 3) {
		for (int i = 0; i < len; i++) {
			b.insert(0, "0");
		}
	}

	string o;
	vector<string> v;
	for (int i = 0; i < b.length()/3; i++) {
		v.push_back(b.substr(i * 3, 3));
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			int num = (v[i][j] - '0')*pow(2, 2 - j);
			sum += num;
		}
		string ans = to_string(sum);
		o.insert(i, ans);
	}
	cout << o;

}