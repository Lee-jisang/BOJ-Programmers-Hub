#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<char, string>> p;
    for (int i = 0; i < strings.size(); i++) {
        p.push_back({strings[i][n], strings[i]});
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < p.size(); i++) {
        answer.push_back(p[i].second);
    }
    return answer;
}