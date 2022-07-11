#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
	int N;
	cin >> N;

	unordered_map<string, int> m;

	string name;
	for (int i = 0; i < N; i++) {
		cin >> name;

		if (m.find(name) != m.end()) {
			m[name] += 1;
		}
		else {
			m[name] = 1;
		}		 
	}

	for (int i = 0; i < N - 1; i++) {
		cin >> name;
		m[name] -= 1;
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second == 1) cout << it->first;
	}
}

