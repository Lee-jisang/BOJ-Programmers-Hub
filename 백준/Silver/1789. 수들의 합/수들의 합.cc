#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	unsigned long S;
	cin >> S;


	unsigned long i = 1;
	vector<pair<unsigned long, unsigned long>> s;
	unsigned long sum = 0;
	while (1) {
		if (sum < S) {
			sum = sum + i;
			s.push_back(pair<unsigned long, unsigned long>(i, sum));
			//cout << i << " " << sum << "\n";
			i++;

		}		
		
		else {

			if (S == s[s.size() - 1].second) {
				cout << s[s.size() - 1].first;//6
				break;
			}		
			else if (s[s.size() - 1].second > S && S > s[s.size() - 2].second) {
				cout << s[s.size() - 2].first;
				break;
			}

		}
		
	}
}