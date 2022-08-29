#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	string grade[13] = {"A+","A0","A-","B+","B0","B-","C+","C0","C-" ,"D+","D0","D-" ,"F"};
	string g[13] = {"4.3","4.0","3.7","3.3","3.0","2.7","2.3","2.0","1.7","1.3","1.0","0.7","0.0"};

	string s;
	cin >> s;
	for (int i = 0; i < 13; i++) {
		if (grade[i] == s)
			cout << g[i];
	}

}