#include <iostream>
#include <cmath>
using namespace std;
char a[8] = {'A','B','C','D','E','F','G','H'};

int main() {
	string king;
	string stone;
	int N;
	cin >> king >> stone >> N;

	int c1, c2;
	for (int i = 0; i < 8; i++) {
		if (a[i] == king[0]) {
			c1 = i;
		}
		if (a[i] == stone[0]) {
			c2 = i;
		}		
	}
	int r1 = 8 - (king[1] - '0');
	int r2 = 8 - (stone[1] - '0');

	for (int i = 0; i < N; i++) {
		string p;
		cin >> p;
		if (p.length() == 1) {//L,R,T,B
			if (p == "L") {//왼쪽으로 한칸
				if (1 <= c1) {
					c1--;
				}
				if (r1 == r2 && c1 == c2) {
					c2--;
					if(c2<0){
						c1++;
						c2++;
					}
				}
			}
			else if (p == "R") {
				if (6 >= c1) {
					c1++;
				}
				if (r1 == r2 && c1 == c2) {
					c2++;
					if (c2 > 7) {
						c1--;
						c2--;
					}
				}
			}
			else if (p == "T") {
				if (1 <= r1) {
					r1--;
				}
				if (r1 == r2 && c1 == c2) {
					r2--;
					if (r2 < 0) {
						r1++;
						r2++;
					}
				}
			}
			else if (p == "B") {
				if (6 >= r1) {
					r1++;
				}
				if (r1 == r2 && c1 == c2) {
					r2++;
					if (r2 > 7) {
						r1--;
						r2--;
					}
				}
			}
		}
		else {//RT,LT,RB,LB
			if (p == "RT") {
				c1++;
				r1--;
				if (7 < c1 || 0 > r1) {
					c1--;
					r1++;
				}
				if (r1 == r2 && c1 == c2) {
					c2++;
					r2--;
					if (7 < c2 || r2 < 0) {
						c2--;
						r2++;
						c1--;
						r1++;
					}
				}
				
			}
			else if (p == "LT") {
				c1--;
				r1--;
				if (0 > c1 || 0 > r1) {
					c1++;
					r1++;
				}
				if (r1 == r2 && c1 == c2) {
					c2--;
					r2--;
					if (c2<0 || r2 < 0) {
						c2++;
						r2++;
						c1++;
						r1++;
					}
				}
			}
			else if (p == "RB") {
				c1++;
				r1++;
				if (7 < c1 || 7 < r1) {
					c1--;
					r1--;
				}
				if (r1 == r2 && c1 == c2) {
					c2++;
					r2++;
					if (7 < c2 || 7 < r2) {
						c2--;
						r2--;
						c1--;
						r1--;
					}
				}
			}
			else if (p == "LB") {
				c1--;
				r1++;
				if (0 > c1 || 7 < r1) {
					c1++;
					r1--;
				}
				if (r1 == r2 && c1 == c2) {
					c2--;
					r2++;
					if (0 > c2 || 7 < r2) {
						c1++;
						r1--;
						c2++;
						r2--;
					}
				}

			}
		}
	}


	cout << a[c1] << 8-r1 << "\n";
	cout << a[c2] << 8-r2  << "\n";

}