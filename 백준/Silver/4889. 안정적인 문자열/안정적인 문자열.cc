#include <iostream>
#include <regex>
using namespace std;

int main() {
	int cnt = 0;
	while(1) {
		cnt++;
		string s;
		cin >> s;
		if (s.find('-') != string::npos) return 0;

		while (s.find("{}") != string::npos)  //{}가 없을때까지	
			s = regex_replace(s, regex("\\{\\}"), ""); //정규식에 맞춰줘야함

		if (s == "")
			cout << cnt<<". "<< 0 << "\n";
		else {
			if (s.find("}{") != string::npos) {//}{가 있으면
				string s2 = s;
				while (s.find("}}") != string::npos || s.find("{{") != string::npos) {//{}가 없을때까지	
					s = regex_replace(s, regex("\\}\\}"), ""); //정규식에 맞춰줘야함
					s = regex_replace(s, regex("\\{\\{"), ""); //정규식에 맞춰줘야함
				}
				if(s=="")
					cout << cnt << ". " << s2.length() / 2 << "\n";
				else {
					cout << cnt << ". " << s2.length() / 2 +1<< "\n";
				}
			}
			else {
				cout << cnt << ". " << s.length() / 2 << "\n";
			}	
		}
			
	}
}