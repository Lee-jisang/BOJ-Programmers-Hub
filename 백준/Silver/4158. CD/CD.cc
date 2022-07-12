#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        int N, M;
        cin >> N >> M;
        if (N == 0 && M == 0) break;
            
        vector<int> v1;
        vector<int> v2;

        int a;
        for (int i = 0; i < N; i++) {
            cin >> a;
            v1.push_back(a);
        }
        for (int i = 0; i < M; i++) {
            cin >> a;
            v2.push_back(a);
        }

        int cnt = 0;
        if (v1.size() == v2.size()) {        
            for (int i = 0; i < v1.size(); i++) {
                if (binary_search(v2.begin(), v2.end(), v1[i])) cnt++;
            }
            cout << cnt << "\n";
        }
        else if (v1.size() > v2.size()) {
            for (int i = 0; i < v2.size(); i++) {
                if (binary_search(v1.begin(), v1.end(), v2[i])) cnt++;
            }
            cout << cnt << "\n";
        }
        else {
            for (int i = 0; i < v1.size(); i++) {
                if (binary_search(v2.begin(), v2.end(), v1[i])) cnt++;
            }
            cout << cnt << "\n";
        }

     
    }
}
