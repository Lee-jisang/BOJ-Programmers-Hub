#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;
	vector<int> minus;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a < 0) {
			cnt++;
			minus.push_back(a);
		}
		else {
			v.push_back(a);
		}

	}
	sort(v.begin(), v.end());
	sort(minus.begin(), minus.end());

	if (minus.empty()) {
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 0 || v[i] == 1) {
				sum += v[i];
			}
			else {
				if ((v.size() - 1 - i) % 2 == 1) {//짝
					for (int j = i; j <= v.size() - 2; j = j + 2) {
						sum += v[j] * v[j + 1];
					}
					cout << sum;
					return 0;
				}
				else {
					sum += v[i];
					if (i == v.size() - 1) {
						cout << sum;
						return 0;
					}
					else {
						for (int j = i + 1; j <= v.size() - 2; j = j + 2) {
							sum += v[j] * v[j + 1];
						}
						cout << sum;
						return 0;
					}
				}
			}
		}
		cout << sum;
		return 0;
	}
	else {
		int sum = 0;
		if (cnt % 2 == 1) {//음수가 홀수개인경우, 0을 고려
			if (find(v.begin(), v.end(), 0) != v.end()) { //벡터안에 0이 있을때,
				for (int i = 0; i < minus.size(); i = i + 2) {
					if (i == minus.size() - 1) {
						sum += 0;
						break;
					}
					else {
						sum += minus[i] * minus[i + 1];
					}
				}
				for (int i = 0; i < v.size(); i++) {
					if (v[i] == 0 || v[i] == 1) {
						sum += v[i];
					}
					else {
						if ((v.size() - 1 - i) % 2 == 1) {//짝
							for (int j = i; j <= v.size() - 2; j = j + 2) {
								sum += v[j] * v[j + 1];
							}
							cout << sum;
							return 0;
						}
						else {
							sum += v[i];
							if (i == v.size() - 1) {
								cout << sum;
								return 0;
							}
							else {
								for (int j = i + 1; j <= v.size() - 2; j = j + 2) {
									sum += v[j] * v[j + 1];
								}
								cout << sum;
								return 0;
							}
						}
					}
				}
				cout << sum;
				return 0;
			}
			else {//벡터안에 0이 없을때,
				for (int i = 0; i < minus.size(); i = i + 2) {
					if (i == minus.size() - 1) {
						sum += minus[i];
						break;
					}
					else {
						sum += minus[i] * minus[i + 1];
					}	
				}
				for (int i = 0; i < v.size(); i++) {
					if (v[i] == 0 || v[i] == 1) {
						sum += v[i];
					}
					else {
						if ((v.size() - 1 - i) % 2 == 1) {//짝
							for (int j = i; j <= v.size() - 2; j = j + 2) {
								sum += v[j] * v[j + 1];
							}
							cout << sum;
							return 0;
						}
						else {
							sum += v[i];
							if (i == v.size() - 1) {
								cout << sum;
								return 0;
							}
							else {
								for (int j = i + 1; j <= v.size() - 2; j = j + 2) {
									sum += v[j] * v[j + 1];
								}
								cout << sum;
								return 0;
							}
						}
					}
				}
				cout << sum;
				return 0;
			}
		}
		else {//음수가 짝수개인경우, 0을 고려하지않아도됨
			for (int i = 0; i < minus.size() - 1; i = i + 2) {
				sum += minus[i] * minus[i + 1];
			}
			for (int i = 0; i < v.size(); i++) {
				if (v[i] == 0 || v[i] == 1) {
					sum += v[i];
				}
				else {
					if ((v.size() - 1 - i) % 2 == 1) {//짝
						for (int j = i; j <= v.size() - 2; j = j + 2) {
							sum += v[j] * v[j + 1];
						}
						cout << sum;
						return 0;
					}
					else {
						sum += v[i];
						if (i == v.size() - 1) {
							cout << sum;
							return 0;
						}
						else {
							for (int j = i + 1; j <= v.size() - 2; j = j + 2) {
								sum += v[j] * v[j + 1];
							}
							cout << sum;
							return 0;
						}
					}
				}
			}
			cout << sum;
			return 0;
		}
	}
}