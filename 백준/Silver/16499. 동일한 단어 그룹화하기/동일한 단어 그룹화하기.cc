#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	unordered_map<string, bool> m;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		m[s] = true;
	}
	cout << m.size();
}