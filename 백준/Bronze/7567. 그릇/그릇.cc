#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {


	string s;
	cin >> s;
	int sum = 10;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == ')') {
			if (s[i + 1] == ')') {//))
				sum += 5;
			}
			else {//)(
				sum += 10;
			}
		}
		else {
			if (s[i + 1] == ')') {//()
				sum += 10;
			}
			else {//((
				sum += 5;
			}
		}
	}
	cout << sum;
}