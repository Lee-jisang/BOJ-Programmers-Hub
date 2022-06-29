#include<iostream>
#include<vector>
using namespace std;

int map[500][500];

int main(){
	int n,m,b;
	cin>>n>>m>>b;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int temp;
			cin>>temp;
			map[i][j]=temp;
		}
	}
	
	int ans_cost=1e9;
	int ans_heigth;
	// dig 2sec, build 1sec
	for(int h=0; h<=256; h++){
		int temp_ans=0;
		int clone_b = b;
		bool check=false;
		bool checkAct[500][500];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				checkAct[i][j]=false;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0;j<m;j++){
				if(h==map[i][j]){
					checkAct[i][j]=true;
				}
				else if(h<map[i][j]){ // 블록 파기 
					int cnt = map[i][j]-h;
					temp_ans+=(2*cnt);
					clone_b+=cnt;
					checkAct[i][j]=true;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(checkAct[i][j]==false){ //블록 쌓기 
					checkAct[i][j]=true;
					int cnt=h-map[i][j];
					if(clone_b<cnt){
						check=true;
						break;
					}
					temp_ans+=cnt;
					clone_b-=cnt;
				}
			}
			if(check) break;
		}
		if(check==false && temp_ans<=ans_cost) { // temp_ans<=ans_cost 인이유는 h가 올라가니까 시간이 같을때 h는 큰것이 출력됨
		//1 3 3
		//0 0 1
		//1 1 1 2초
		//0 0 0 2초
			ans_cost=temp_ans;
			ans_heigth=h;
		}
	}
	
	cout<<ans_cost<<' '<<ans_heigth;
}