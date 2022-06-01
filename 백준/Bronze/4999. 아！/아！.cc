#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	string s2;
	cin >> s2;
	if (s.find(s2) == string::npos)
		cout << "no";
	else
		cout << "go";
	

}