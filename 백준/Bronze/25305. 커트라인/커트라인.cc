#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> score;
    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        score.push_back(a);
    }

    sort(score.begin(), score.end(),greater<>());
    cout << score[k-1];
}