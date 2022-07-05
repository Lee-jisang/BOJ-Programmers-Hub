#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
	unordered_map<string, bool> m;
	string s;
	cin >> s;

	int cnt = 0;
	for (int i = s.length()-1; i >=0; i--) {
		for (int j = i; j >= 0; j--) {
			//cout << s.substr(j, s.length()-i) << " ";
			if (m[s.substr(j, s.length() - i)] == true) {
				continue;
			}
			m[s.substr(j, s.length() - i)]=true;
			cnt++;
		}
	}

	cout << cnt;
}