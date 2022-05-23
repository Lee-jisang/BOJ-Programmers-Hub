#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) 
		cin >> a[i];

	int sum = 0;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		sum += a[i];
		if (sum <= 100) {		
			v.push_back(sum);
		}			
		else {
			v.push_back(sum);
			break;
		}
	}
	if (100 - v[v.size() - 2] > abs(100 - v[v.size() - 1]))
		cout << v[v.size() - 1];
	else if (100 - v[v.size() - 2] < abs(100 - v[v.size() - 1]))
		cout << v[v.size() - 2];
	else
		cout << v[v.size() - 1];
}

