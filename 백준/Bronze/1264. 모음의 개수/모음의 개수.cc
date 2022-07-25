#include <iostream>
#include <string>
using namespace std;

int main() {
	string m = "iaeouIAEOU";
	string sentence;
	while (1) {
		getline(cin, sentence);
		if (sentence == "#") return 0;
		int cnt = 0;
		for (int i = 0; i < sentence.length(); i++) {	
			if(m.find(sentence[i]) != string::npos)//찾는 문자 존재
				cnt++;		
			else 
				continue;		
		}
		cout << cnt << "\n";
	}
}