#include <iostream>
using namespace std;

int main() {
	char a[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) 
			cin >> a[i][j];	
	}

	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {//0,2,4,6
			for (int j = 0; j < 8; j++) {
				if (j % 2 == 0) 
					if (a[i][j] == 'F') cnt++;				
			}
		}
		else {//1,3,5,7
			for (int j = 0; j < 8; j++) {
				if (j % 2 == 1) 
					if (a[i][j] == 'F') cnt++;				
			}
		}

	}

	cout << cnt;
}