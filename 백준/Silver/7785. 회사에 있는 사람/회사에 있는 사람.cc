#include <iostream>
#include <map>
using namespace std;

int main() {	
	int n;
	cin >> n;
	//내림차순으로 바꾸고 싶은경우 정렬 기준 조건자에 greater<key 자료형>
	map<string, string, greater<string>> m;


	string name;
	string el;
	for(int i=0; i<n; i++){
		cin >> name >> el;
		m[name] = el;
	}


	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second == "enter") {
			cout << it->first << "\n";
		}
	
	}
	
}
