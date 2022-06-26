#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {	

	
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	int t1;
	if (A % C == 0) {
		t1 = A / C;
	}
	else {
		t1 = A / C + 1;
	}

	int t2;
	if (B % D == 0) {
		t2 = B / D;
	}
	else {
		t2 = B / D + 1;
	}

	if (t1 >= t2) {
		cout << L - t1;
	}
	else {
		cout << L - t2;
	}

}
