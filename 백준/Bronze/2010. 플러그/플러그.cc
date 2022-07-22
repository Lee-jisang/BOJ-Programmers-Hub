#include <iostream>
using namespace std;

int main() {	
	int plug = 1;//플러그가 하나
	int N;
	cin >> N;//멀티탭개수	
	int plugN;
	for (int i = 0; i < N; i++) {
		cin >> plugN;
		if (plugN == 1) continue;
		plug += plugN - 1;
	}
	cout << plug;
}
