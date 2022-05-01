#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;



int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		vector<char> v;
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			v.push_back(a);

		}

		vector<char> v2;
		v2.insert(v2.begin(), v[0]);//v2[0]=v[0]이게 문제였음

		for (int k = 1; k < v.size(); k++) {
			if (v2.front() >= v[k]) {
				v2.insert(v2.begin(), v[k]);//앞에 삽입
			}
			else {
				v2.push_back(v[k]);
			}
		}

		for (int l = 0; l < v2.size(); l++) {
			cout << v2[l];
		}




		cout << "\n";


	}



}