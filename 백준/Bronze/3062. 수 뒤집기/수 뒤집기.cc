#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		int a = stoi(s);

		reverse(s.begin(), s.end());
		int b = stoi(s);

		string ans1 = to_string(a + b);
		string ans2 = to_string(a + b);
		reverse(ans1.begin(), ans1.end());

		if (ans1 == ans2) 
			cout << "YES" << "\n";
		else 
			cout << "NO" << "\n";		
	}
}