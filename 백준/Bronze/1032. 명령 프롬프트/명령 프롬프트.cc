#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<string> v;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}
	
	vector<int> cnt(51);//0으로 자동초기화
	for (int i = 1; i < v.size(); i++) {
		for (int j = 0; j < s.length(); j++) {
			if (v[i - 1][j] != v[i][j]) {
				cnt[j] = 1;
			}
		}
	}

	for (int i = 0; i < cnt.size(); i++) {
		if (cnt[i] == 1) {
			s.replace(i, 1, "?");
		}
	}
	cout << s;

}

