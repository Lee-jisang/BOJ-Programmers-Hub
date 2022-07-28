#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	int ans1;
	int ans2;

	ans1 = A * P;

	if (P <= C) {
		ans2 = B;
	}
	else {
		ans2 = B + (P - C) * D;
	}

	cout << min( ans1,ans2 );
}