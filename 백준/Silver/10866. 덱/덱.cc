#include <iostream>
#include <deque>
using namespace std;

int main() {
	int N;
	cin >> N;

	deque<int> dq;

	
	for (int i = 0; i < N; i++) {
		string s; //명령
		cin >> s;
		if (s == "push_back") {
			int a;
			cin >> a;
			dq.push_back(a);
		}
		else if (s == "push_front") {
			int a;
			cin >> a;
			dq.push_front(a);
		}
		else if (s == "front") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.front() << "\n";
		}
		else if (s == "back") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.back() << "\n";
		}
		else if (s == "size") {
			cout << dq.size() << "\n";
		}
		else if (s == "empty") {
			if (dq.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (s == "pop_front") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();			
			}
		}
	}

}
