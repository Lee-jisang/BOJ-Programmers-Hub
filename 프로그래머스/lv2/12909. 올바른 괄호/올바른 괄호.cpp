#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(st.empty() || st.top() == s[i]) st.push(s[i]);
        else if(st.top() != s[i]) {
            if(st.top() == ')') continue;
            else st.pop();        
        }
    }
    if(st.empty()) return true;
    else return false;
}