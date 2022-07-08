#include <iostream>
#include <map>
#include <string>

using namespace std;
//파일을 확장자 별로 정리해서 몇 개씩 있는지 알려줘
//보기 편하게 확장자들을 사전 순으로 정렬해 줘
int main() {
	int N;
	cin >> N;
	string s;
	map<string, int> m;
	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '.') {
				string ex = s.substr(i+1, s.length());
				m[ex] += 1;
				break;
			}
		}
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << "\n";
	}

}