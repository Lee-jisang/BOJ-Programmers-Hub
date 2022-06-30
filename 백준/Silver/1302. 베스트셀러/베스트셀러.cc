#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
		
	string title;
	map<string, int> book;

	int max_count=0;
	for (int idx = 0; idx < N; ++idx) {
		cin >> title;
		book[title]++;
		max_count = max(max_count, book[title]);
	}

	for (auto iter = book.begin(); iter != book.end(); ++iter) {
		if (iter->second == max_count) {
			cout << iter->first;
			return 0;
		}
	}
}