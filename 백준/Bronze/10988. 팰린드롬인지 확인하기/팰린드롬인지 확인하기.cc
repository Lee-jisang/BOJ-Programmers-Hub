#include <iostream>
#include <string>
using namespace std;
int main() {	

	string s;
	cin >> s;
	int cnt = 0;
	int k = s.length() - 1;
	for (int i = 0; i < s.length() / 2; i++) {
		//0 1 2 3 4
		if (s[i] == s[k--]) {
			cnt++;
		}
	}


	if (cnt == s.length() / 2) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}
