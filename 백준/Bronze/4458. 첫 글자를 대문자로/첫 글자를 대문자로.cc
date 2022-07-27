#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();

	string s;
	for (int i = 0; i < N; i++) {
		getline(cin, s);
		s[0]= char(toupper(s[0]));
		cout << s << "\n";
	}

}