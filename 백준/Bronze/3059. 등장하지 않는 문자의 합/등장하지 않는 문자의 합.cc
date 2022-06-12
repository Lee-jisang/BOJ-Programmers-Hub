#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;

	string s;
	for (int i = 0; i < T; i++) {
		cin >> s;
		int a[26] = { 0, };
		for (int j = 0; j < s.length(); j++) 
			a[(int)s[j] - 65]++;
		
		int sum = 0;
		for (int j = 0; j < 26; j++) 
			if (a[j] == 0) 
				sum += (j + 65);
				
		cout << sum << "\n";
	}
}