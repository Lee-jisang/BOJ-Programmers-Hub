#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, bool> m;

	string s;
	cin >> s;
	int num[4] = { 13,13,13,13 };

	for (int i = 0; i < s.length(); i++) {
		if (i % 3 == 0) {
			if (m.find(s.substr(i, 3)) != m.end()) {
				cout << "GRESKA";
				return 0;
			}
			else {
				m[s.substr(i, 3)] = true;
				if (s.substr(i, 3)[0] == 'P') {
					num[0]--;
				}
				else if (s.substr(i, 3)[0] == 'K') {
					num[1]--;
				}
				else if (s.substr(i, 3)[0] == 'H') {
					num[2]--;
				}
				else {
					num[3]--;
				}
	
			}
		}		
	}

	for (int i = 0; i < 4; i++)
		cout << num[i] << " ";

}