#include<iostream>
#include<vector>
using namespace std;

char map[50][50];

int main() {
	int n, m;
	cin >> n >> m;

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		bool check = false;
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 'X') {
				check = true;
				break;
			}
		}
		if (check == false) 
			cnt1++;	
	}

	for (int i = 0; i < m; i++) {
		bool check = false;
		for (int j = 0; j < n; j++) {
			if (map[j][i] == 'X') {
				check = true;
				break;
			}
		}
		if (check == false) 
			cnt2++;		
	}
	cout << max(cnt1, cnt2);
}