#include <iostream>
#include <regex>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;

	


		while (s.find("()") != string::npos) { //()가 없을때까지	
			s = regex_replace(s, regex("\\(\\)"), "");

			
		}

		if (s == "") {
			cout << "YES" << "\n";

		}
		else {
			cout << "NO" << "\n";

		}



	}


}


