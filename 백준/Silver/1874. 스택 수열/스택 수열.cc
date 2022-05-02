#include<iostream>
#include<stack>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    //스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자

    vector<char> v;
    stack<int> s;


    int cnt = 1;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;

        while (cnt <= a) {
            s.push(cnt);
            cnt++;
            v.push_back('+');

        }

        if (s.top() == a) {
            s.pop();
            v.push_back('-');
        }
        else {
            cout << "NO";
            return 0;
        }
 
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }






}
