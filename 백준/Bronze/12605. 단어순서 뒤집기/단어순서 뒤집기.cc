#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); //getline이랑 함께쓸때,

    int cnt = 0;
    while (1) {
        
        stack<char> s1;
        stack<char> s2;
        string str;
        getline(cin, str);

        for (int j = 0; j < str.length(); j++)
            s1.push(str[j]);


        cout << "Case #" << cnt+1 << ": ";
        while (!s1.empty())
        {
            //cout << s1.top();

            if (s1.top() != ' ') {
                s2.push(s1.top());
            }
            else {
                while (!s2.empty()) {
                    cout << s2.top();
                    s2.pop();
                }
                cout << " ";
            }
            s1.pop();
        }
        while (!s2.empty()) {
            cout << s2.top();
            s2.pop();
        }
        cout << "\n";
        cnt++;
        if (cnt == T) break;
    }


}
