#include <iostream>
#include <queue>
using namespace std;
#define MAX 101

int N, M, V; //정점개수, 간선개수, 시작정점
int map[MAX][MAX]; //인접 행렬 그래프
bool visited[MAX]; //정점 방문 여부
queue<int> q;

void BFS(int v) {
    q.push(1);
    visited[1] = true;
    //cout << v << " ";
    int cnt = 0;
    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int w = 1; w <= N; w++) {
            if (map[v][w] == 1 && visited[w] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
                q.push(w);
                visited[w] = true;
                cnt++;
                //cout << w << " ";
            }
        }
    }
    cout << cnt;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    BFS(1);
   
    return 0;
}