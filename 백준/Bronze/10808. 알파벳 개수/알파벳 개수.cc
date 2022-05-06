#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	string s;
	cin >> s;
	
	int b[26] = { 0, };
	for (int i = 0; i < s.length(); i++) {
		b[int(s[i]) - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << b[i] << " ";
	}

}