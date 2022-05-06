#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	string s;
	cin >> s;

	char a[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int b[26] = { 0, };
	for (int i = 0; i < s.length(); i++) {
		b[int(s[i]) - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << b[i] << " ";
	}

}