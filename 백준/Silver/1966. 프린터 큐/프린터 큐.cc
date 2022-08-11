#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N, M;//문서 개수, 몇번째로 출력되었는지 알고싶은 문서의 현재큐의 인덱스
		cin >> N >> M;
		queue<pair<int, int>> q;
		vector<int> importance;
	
		for (int j = 0; j < N; j++) {//문서개수만큼 중요도 입력
			int a;
			cin >> a;
			importance.push_back(a);
			q.push({a,j});
		}
		sort(importance.begin(), importance.end(), greater<>());
		int cnt = 0;
		int k = 0;
		while (true) {
			if (q.front().first != importance[k]) {//중요도가 높은순으로 현재큐의 중요도랑 다르면
				q.push({ q.front().first,q.front().second });//1234->12341
				q.pop();//12341->2341
			}
			else {//중요도가 높은순으로 순서가오면
				if (q.front().second == M) {//순서가 왔는데 내가찾으려는 인덱스이면
					cnt++;
					break;
				}
				else {//순서가 왔는데 내가 찾으려는 인덱스가 아니면
					q.pop();//큐에서 출력
					cnt++;//카운트 증가
					k++;//다음 중요도로
				}
			}
		}

		cout << cnt;
		cout << "\n";



	}



}