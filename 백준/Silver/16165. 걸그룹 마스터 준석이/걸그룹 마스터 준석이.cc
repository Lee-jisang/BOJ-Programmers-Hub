#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> m;

	int  N, M;
	cin >> N >> M;


	for (int i = 0; i < N; i++) {
		string groupName;
		int groupNum;
		cin >> groupName;
		cin >> groupNum;
		for (int j = 0; j < groupNum; j++) {
			string memberName;
			cin >> memberName;
			m[memberName] = groupName;
		}
	}


	for (int i = 0; i < M; i++) {
		string s;
		int k;
		cin >> s >> k;
		if (k == 1) { //1일 경우 해당 멤버가 속한 팀의 이름
			cout << m[s] << "\n";
		}
		else { //0일 경우 해당 팀에 속한 멤버의 이름을 사전순
			for (auto it = m.begin(); it != m.end(); it++) {
				if (it->second == s) {
					cout << it->first << "\n";
				}
			}
		}
	}
}