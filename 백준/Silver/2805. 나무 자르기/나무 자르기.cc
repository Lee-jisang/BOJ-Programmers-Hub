#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;

	int M;
	cin >> M;

	int a;
	vector<long int> v;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());



	long int start = 1;
	long int end = v[N - 1];
	long int result=0;

	while (start <= end) {
		long int mid = (start + end) / 2;

		long int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			if (mid < v[i]) 
				sum += v[i] - mid;
		}

		if (sum < M) {
			end= mid-1;
		}
		else {
			result = mid;
			start = mid + 1;
		}

	}

	cout << result;
}

