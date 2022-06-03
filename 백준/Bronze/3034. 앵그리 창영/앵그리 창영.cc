#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, W, H;
	cin >> N >> W >> H;

	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (sqrt(W * W + H * H) >= a)
			cout << "DA" << "\n";
		else
			cout << "NE" << "\n";		
	}

	
	

}

