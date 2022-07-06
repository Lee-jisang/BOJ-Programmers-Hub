#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	string num;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	set<string> s;
	do
	{
		string ans;
		for (int i = 0; i < k; i++)
			ans += v[i];	
		s.insert(ans);
	} while (next_permutation(v.begin(), v.end()));
	
	cout << s.size();

}