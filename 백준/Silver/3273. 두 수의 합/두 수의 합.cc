#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int x;
    cin >> x;

    int cnt = 0;
    int k = n;
    for (int i = 0; i < n; i++) 
        if (binary_search(v.begin(), v.end(), x - v[i])) 
            cnt++;

    cout << cnt/2;
}