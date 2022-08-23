#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	int sum = 1;

	for (int i = 0; i < v.size(); i++) {
	
		if (v[i] > sum)
			break;
		
		sum += v[i];
		
	}
	cout << sum << " ";
    
 //https://novlog.tistory.com/9
}