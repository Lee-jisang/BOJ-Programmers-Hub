#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	unordered_map<string, int> m;
	vector<pair<string, int>> v;

	int N;
	cin >> N;

	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		m[s] = i + 1;
	}

	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back({s,m[s]});
	}

	int cnt = 0;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i+1; j < N; j++) {
			if (v[i].second > v[j].second) {
				cnt++;
				break;
			}		
		}
	}

	cout << cnt;
}