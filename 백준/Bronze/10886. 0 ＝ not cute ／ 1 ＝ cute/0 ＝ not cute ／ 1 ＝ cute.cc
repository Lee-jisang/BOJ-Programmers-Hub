#include <iostream>
#include <string>
using namespace std;
int main() {	

	int N;
	cin >> N;

	int cnt = 0;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a == 1) cnt++;
	}

	if (cnt > N / 2) 
		cout << "Junhee is cute!";	
	else 
		cout << "Junhee is not cute!";	
}
