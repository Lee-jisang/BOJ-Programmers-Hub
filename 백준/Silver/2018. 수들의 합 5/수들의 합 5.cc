#include <iostream>
using namespace std;

int main() {	
	int N;
	cin >> N;
	
	int cnt = 0;
	for (int i = 1; i <= N/2; i++) {
		int sum = 0;
		for (int j = i; j < N; j++) {
			sum = sum + j;
			if (sum > N) break;
			if (sum == N) cnt++;
		}
	}
	cout << cnt+1;		
}