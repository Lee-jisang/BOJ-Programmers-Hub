#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int bunja=1;
	int bunmo = 1;
	for (int i = 0; i < K; i++) {
		bunja *= N--;
		bunmo *= (i + 1);
	}
	cout << bunja / bunmo;
}
