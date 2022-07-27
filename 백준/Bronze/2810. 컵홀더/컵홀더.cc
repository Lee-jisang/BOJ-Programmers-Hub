#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

int main() {
	int N;
	cin >> N;

	string s;
	cin >> s;

	int cnt = 0;

	if (s.find("L") == string::npos) {// not find
		cout << N;
		return 0;
	}
	else if(s.find("S") == string::npos) {
		cout << N / 2 + 1;
		return 0;
	}else{
		s = regex_replace(s, regex("S"), "*S*");
		s = regex_replace(s, regex("LL"), "*LL*");
		s = regex_replace(s, regex("\\*\\*"), "*");	
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '*') cnt++;
		}
	}
	cout << cnt;


	//while (s.find("..") != string::npos)  //..가 없을때까지	
	//	s = regex_replace(s, regex("\\.\\."), "."); //정규식에 맞춰줘야함

}