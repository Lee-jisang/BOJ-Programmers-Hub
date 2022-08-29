#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;//전화번호 수
		vector<string> v;
		for (int j = 0; j < n; j ++ ) {
			string s;
			cin >> s;
			v.push_back(s);

		}
		sort(v.begin(), v.end());

		int cnt = 0;
		int cnt2 = 0;
		for (int j = 0; j < v.size()-1; j++) {
			
			if (v[j + 1].find(v[j]) != string::npos) {
				for (int k = 0; k < v[j].length(); k++) {
					if (v[j][k] != v[j + 1][k]) {
						cnt2++;
						break;
					}
				}
				if (cnt2 == 0) {
					cout << "NO" << "\n";
					cnt++;
					break;
				}

			}
				
		}
		if(cnt==0)
			cout << "YES" << "\n";
	}


	
}