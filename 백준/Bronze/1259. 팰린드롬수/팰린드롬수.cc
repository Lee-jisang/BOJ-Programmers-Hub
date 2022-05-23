#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	while (1) {
		cin >> s;
		if (s == "0") return 0;
		vector<int> v;
		for (int i = 0; i < s.length(); i++) {
			v.push_back(s[i]);
		}
		int f = 0;
		int r = v.size() - 1;
		int cnt = 0;
		for (int i = 0; i < s.length() / 2; i++) {
			if (v[f++] == v[r--])
				cnt++;
			else
				cnt = 0;
		}
		if (cnt == s.length() / 2)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}
