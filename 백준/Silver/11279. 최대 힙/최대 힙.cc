#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
int N;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    cin >> N;

    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(a);
        }
    }
}

