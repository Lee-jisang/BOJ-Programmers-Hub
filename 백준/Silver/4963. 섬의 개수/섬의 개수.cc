// 섬의 개수(BFS)
// 그래프 이론, 그래프 탐색, 너비 우선 탐색, 깊이 우선 탐색
#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<pair<int,int> >Q;
int map[50][50],visit[50][50];
int dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};//이동할 좌표 
int w,h;
void bfs(){
    while(!Q.empty()){
        int y=Q.front().first;
        int x=Q.front().second;
        Q.pop();
        for(int i=0;i<8;i++){ 
            int nextY=y+dy[i];
            int nextX=x+dx[i];
            if(nextX<0||nextY<0||nextX>=w||nextY>=h)continue;//범위를 벗어나면 무시 
            if(map[nextY][nextX]==1 && visit[nextY][nextX]==0){//이동했을 때 죄표값이 1이거나, 방문안했을때 
                Q.push({nextY,nextX});
                visit[nextY][nextX]=1;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    while(1){
        int cnt=0;
        cin>>w>>h;
        if(!w&&!h)break;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>map[i][j];
                visit[i][j]=0;//방문회수 초기화 
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(!visit[i][j]&&map[i][j]){
                    Q.push({i,j});
                    visit[i][j]=1;
                    bfs();
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
	}
}