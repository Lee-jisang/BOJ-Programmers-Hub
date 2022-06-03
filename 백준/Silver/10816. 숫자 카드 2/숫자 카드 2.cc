#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M, card;
	cin >> N;
	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end()); // 이분탐색을 위해 오름차순 정렬

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		cout << upper_bound(v.begin(), v.end(), card) - lower_bound(v.begin(), v.end(), card) << " ";
	}
}
