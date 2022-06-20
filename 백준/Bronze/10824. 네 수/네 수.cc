#include <iostream>
#include <string>
using namespace std;
int main() {	

	string a, b, c, d;
	cin >> a >> b >> c >> d;

	string first = a + b;
	unsigned long long f = stoll(first);
	string second = c + d;
	unsigned long long s = stoll(second);

	cout << f + s;


}
