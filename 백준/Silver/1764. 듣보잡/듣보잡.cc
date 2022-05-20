#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;   
    cin >> n >> m;

    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        mp[str] = true;
    }

    int cnt = 0;
    vector<string> v;
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;

        if (mp[str]) {
            cnt++;
            v.push_back(str);
        }
            
    }
    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";
}