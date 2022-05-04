#include <iostream>
#include <string>
using namespace std;

int main() {


	string s1;
	cin >> s1;
	string r1 = s1.substr(1);

	//cout << r;

	char a;
	cin >> a;

	string s2;
	cin >> s2;
	string r2 = s2.substr(1);

	if (a == '*') {
		cout << "1" + r1 + r2;
	}
	else {
		if (s1 == s2) {
			cout << "2" + r1;
		}
		else {
			if (s1.length() > s2.length()) {
				s1.replace(s1.length()-s2.length(), 1, "1");
				cout << s1;
			}
			else {
				s2.replace(s2.length() - s1.length(), 1, "1");
				cout << s2;
			}

		}
	}

}


