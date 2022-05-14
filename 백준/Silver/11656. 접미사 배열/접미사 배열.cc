#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//substr 이용
int main() {

	string s;
	cin >> s;

	vector<string> v;
	for (int i = 0; i < s.length(); i++) 
		v.push_back(s.substr(i));

	
	sort(v.begin(), v.end());

	for (int i = 0; i < s.length(); i++)
		cout << v[i] << "\n";



}