#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<pair<int, int>> v;

	int a;

	for (int i = 1; i <= 8; i++) {
		cin >> a;
		v.push_back({ a,i });
	}

	sort(v.begin(), v.end(),greater<>());

	int sum = 0;
	vector<int> rank;
	for (int i = 0; i < 5; i++) {
		sum += v[i].first;
		rank.push_back(v[i].second);
	}
	
	sort(rank.begin(), rank.end());

	cout << sum << "\n";
	for (int i = 0; i < 5; i++)
		cout << rank[i] << " ";


}