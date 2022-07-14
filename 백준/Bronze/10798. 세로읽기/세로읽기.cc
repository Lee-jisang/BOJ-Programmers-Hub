#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    vector<string> v;
    int max = 0;
    for (int i = 0; i < 5; i++) {
        cin >> s;
        v.push_back(s);
        if (max < s.length())
            max = s.length();
    }

    vector<int> r;
    for (int i = 0; i < 5; i++) 
        r.push_back(max - v[i].length());
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < r[i]; j++) 
            v[i] += " ";         
    }

    for (int j = 0; j < max; j++) {
        for (int i = 0; i < 5; i++) {
            if (v[i][j] == ' ') {
                continue;
            }
            else {
                cout << v[i][j];
            }
        }
    }
}

