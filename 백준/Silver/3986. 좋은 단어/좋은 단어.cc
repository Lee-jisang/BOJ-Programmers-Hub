#include <iostream>
#include <regex>
using namespace std;

int main() {

	int N;
	cin >> N;

	int cnt = 0;
	for (int i = 0; i < N; i++) {		
		string s;
		cin >> s;
		if (s.length() % 2 == 0) {//s의길이가 짝수일때만, 홀수이면 짝못지음
			while (s.find("AA") != string::npos || s.find("BB") != string::npos) { //"AA", "BB"가 없을 떄 까지
				s = regex_replace(s, regex("AA"), "");
				s = regex_replace(s, regex("BB"), "");
			}
			if (s == "")
				cnt++;
		}
	}
	cout << cnt;
}