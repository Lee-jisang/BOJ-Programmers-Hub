#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,b;
	getline(cin, s);
	getline(cin, b);

	int cnt = 0;
	while (s.find(b) != string::npos) {  //b가 없을때까지	
		s.replace(s.find(b), b.length(), "1");
		cnt++;
	}
	cout << cnt;
}