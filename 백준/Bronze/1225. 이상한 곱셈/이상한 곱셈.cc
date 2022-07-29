#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if (a == "0" || b == "0") {
		cout << 0;
		return 0;
	}

	long long sum = 0;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++) 
			sum += (a[i]-'0')*(b[j]-'0');	
	}
	cout << sum;
}
