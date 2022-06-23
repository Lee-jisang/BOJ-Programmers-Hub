#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {	

	int a;
	int max = 0;
	vector<pair<int,int>> v;
	for (int j = 1; j <= 5; j++) {
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			cin >> a;
			sum += a;
		}
		v.push_back({ sum,j });
	}

	sort(v.begin(), v.end(), greater<>());

	cout << v[0].second << " " << v[0].first;


}
