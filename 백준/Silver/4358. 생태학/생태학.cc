#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, float> m;
	string s;
	int cnt = 0;
	while (getline(cin, s)) {
		m[s] += 1;
		cnt++;
	}
	cout << fixed;
	cout.precision(4);
	for (auto it = m.begin(); it != m.end(); it++) 
		cout << it->first << " " << it->second/cnt*100 << "\n";	
}