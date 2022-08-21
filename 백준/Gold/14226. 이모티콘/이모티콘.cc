#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

int visit[1001][1001];
int main() {
  
    int n; cin >> n;
    memset(visit, -1, sizeof(visit));//-1로 초기화
      
    queue<pair<int, int>> q;
    q.push({ 1, 0 });//
    visit[1][0] = 0;
    while (!q.empty()) {
        int screen, clipboard;
        screen = q.front().first;
        clipboard = q.front().second;
        q.pop();
        //
        if (visit[screen][screen] == -1) {
            visit[screen][screen] = visit[screen][clipboard] + 1;
            q.push(make_pair(screen, screen));
        }
        //
        if (screen + clipboard <= n && visit[screen + clipboard][clipboard] == -1) {
            visit[screen + clipboard][clipboard] = visit[screen][clipboard] + 1;
            q.push(make_pair(screen + clipboard, clipboard));
        }
        if (screen - 1 >= 0 && visit[screen - 1][clipboard] == -1) {
            visit[screen - 1][clipboard] = visit[screen][clipboard] + 1;
            q.push(make_pair(screen - 1, clipboard));
        }
    }
    int ans = -1;
    for (int i = 0; i <= n; i++) {
        if (visit[n][i] != 1) {
            if (ans<0 || ans>visit[n][i]) ans = visit[n][i];
        }
    }
    cout << ans;
}