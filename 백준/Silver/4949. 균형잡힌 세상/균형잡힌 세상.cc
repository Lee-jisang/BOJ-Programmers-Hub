#include <iostream>
#include <regex>
#include <stack>
#include <vector>
using namespace std;

int main() {



	while (1) {
		string str;
		getline(cin, str);//공백있는 스트링
		if (str == ".") return 0;

		vector<char> s;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ')' || str[i] == '(' || str[i] == ']' || str[i] == '[')
				s.push_back(str[i]);
		}

		string k = "";
		for (int i = 0; i < s.size(); i++) {
			k = k + s[i];

		}

		//cout << k << "\n";

		while (k.find("()") != string::npos || k.find("[]") != string::npos) { //()가 없을 떄 까지
			k = regex_replace(k, regex("\\(\\)"), "");
			k = regex_replace(k, regex("\\[\\]"), "");
		}
		if (k == "")
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}









}





