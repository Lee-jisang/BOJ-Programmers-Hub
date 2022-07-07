#include <iostream>
#include <map>

using namespace std;

int main() {
	int na, nb;
	cin >> na >> nb;

	map<int, bool> m;
	int a;
	int cnt = 0;
	for (int i = 0; i < na; i++) {
		cin >> a;
		m[a] = true;
		cnt++;
	}

	int b;
	for (int i = 0; i < nb; i++) {
		cin >> b;
		if (m[b] == true) {
			m[b] = false;
			cnt--;
		}
	}

	cout << cnt << "\n";

	for (auto it = m.begin(); it != m.end(); it++) {
		if(it->second ==true)
			cout << it->first << " ";
	}



}