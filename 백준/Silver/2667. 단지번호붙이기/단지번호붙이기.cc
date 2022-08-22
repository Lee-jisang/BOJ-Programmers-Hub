#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N;
int cnt = 0;
int visit[26][26]; // 방문표시
char map[26][26]; // 미로
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

vector<int> result;
void BFS(int x, int y)
{
    visit[x][y] = 1; // 방문표시

    queue<pair<int, int> > q; // 큐 생성
    q.push(make_pair(x, y)); // 시작점 넣기


    while (!q.empty()) // 큐에 데이터가 없을때까지
    {
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop(); // 큐 맨 앞 데이터 제거

        for (int i = 0; i < 4; i++)
        {
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if (0 <= next_x && next_x < N && 0 <= next_y && next_y < N) // 미로의 범위
            {
                // 길이 존재하고 이전에 방문했던적이 없는 경우
                if (map[next_x][next_y] == '1' && visit[next_x][next_y] == 0)
                {
                    //dist[next_x][next_y] = dist[x][y] + 1;//길이 막혀있어도 이전값 기준 +1이므로, N,M일때 만 보면됨
                    visit[next_x][next_y] = 1;
                    q.push(make_pair(next_x, next_y)); // 큐에 데이터 밀어넣기
                    cnt++;
                }

            }

        }

    }
}

int main() {

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> map[i];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == '1' && visit[i][j] == false) {
                cnt = 0;
                BFS(i, j);
                result.push_back(cnt+1);
            }
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }


}