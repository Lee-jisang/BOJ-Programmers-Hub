#include<iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	string s1, s2;
	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int a =stoi(s1) + stoi(s2);
	string b = to_string(a);
	reverse(b.begin(), b.end());
	cout << stoi(b);
	
}
