#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int N, M;//1~100, 1~50
	cin >> N >> M;//끊어진 개수 N, 브랜드 M개

	int pc, c; //0~1000
	vector<pair<int, int>> v;
	vector<pair<int, int>> v2;
	for (int i = 0; i < M; i++) {
		cin >> pc >> c;
		v.push_back({ pc,c });
		v2.push_back({ c,pc });
	}
	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end());

	if (N <= 6)
		cout << min(v[0].first, v2[0].first * N);
	else //N >6
		cout << min({ v[0].first * (N / 6) + v2[0].first * (N % 6),v[0].first * (N / 6 + 1), v2[0].first * N });
}

