#include <iostream>
#include <regex>
using namespace std;

int main() {


	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;

		if (s.find("()") == string::npos) {
			cout << "NO" << "\n";
		}
		else {

			string str1;
			while (s.find("()") != string::npos) { //()가 없을때까지	
				str1 = regex_replace(s, regex("\\(\\)"), "");
				s = str1;
				//cout << s << "\n";
			}

			if (str1 == "") {
				cout << "YES" << "\n";

			}
			else {
				cout << "NO" << "\n";

			}
		}


	}


}


