#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<tuple<int, int, int, string>> t;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {

		string s;
		int d, m, y;
		cin >> s >> d >> m >> y;
		t.push_back({ y,m,d,s });
		
	}
	sort(t.begin(), t.end());

	cout << get<3>(t[N-1]) << "\n" << get<3>(t[0]);
}

