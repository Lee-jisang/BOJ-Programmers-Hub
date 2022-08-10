#include <string>
#include <iostream>
#include <string>
using namespace std;
// 3 30
int main() {
	string A,B;
	cin >> A >> B;
	int cnt = 1;
	while (B != A) {
		if ((stoi(B) % 2) == 1 && B[B.length() - 1] != '1') {
			cout << -1;
			return 0;
		}
		if (stoi(A) > stoi(B)) {
			cout << -1;
			return 0;
		}
		if (B[B.length() - 1] == '1') {
			B.erase(B.length() - 1);
			cnt++;
		}
		else {
			long long a= stoi(B)/2;
			B= to_string(a);
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}