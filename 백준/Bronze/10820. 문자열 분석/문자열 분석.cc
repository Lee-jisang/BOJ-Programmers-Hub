#include <iostream>
#include <regex>
using namespace std;

int main() {
	int N;	
	string s;
	
	while (getline(cin, s)) {
		int a[4] = { 0, };
		for (int i = 0; i < s.length(); i++) {
			if ('a' <= s[i] && s[i] <= 'z')
				a[0]++;
			else if ('A' <= s[i] && s[i] <= 'Z')
				a[1]++;
			else if ('0' <= s[i] && s[i] <= '9')
				a[2]++;
			else if (s[i] == ' ')
				a[3]++;
		}
		for (int i = 0; i < 4; i++)
			cout << a[i] << " ";
		cout << "\n";
	}

}