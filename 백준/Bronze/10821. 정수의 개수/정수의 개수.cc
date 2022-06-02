#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	if (s.find(',') == string::npos) {
		cout << 1;
	}
	else {
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ',')
				cnt++;
		}
		cout << cnt + 1;
	}

}