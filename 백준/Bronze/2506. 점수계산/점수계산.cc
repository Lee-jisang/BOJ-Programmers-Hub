#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {	

	
	int cnt = 0;

	int N;
	cin >> N;

	vector<int> v;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < N-1; i++) {
		if (v[i]!=0 && v[i] == v[i+1]) {
			v[i+1] = v[i] + 1;
		}
		else if (v[i + 1] == 1) {
			v[i + 1] = v[i] + 1;
		}			
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		
		sum += v[i];
	}

	cout << sum;

}
