#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long int n) {
    string s=to_string(n);
    vector<char> v;
    for(int i=0; i<s.length(); i++){
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end(),greater<>());
    string k="";
    for(int i=0; i<v.size(); i++){
        k += v[i];
    }
    long long answer=stoll(k);
    return answer;
}