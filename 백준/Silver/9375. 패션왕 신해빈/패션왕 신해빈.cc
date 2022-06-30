#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;	
	
	for(int i=0; i<T; i++){
		int n;
		cin >> n;
		int answer=1;
		if(n==0) answer=0; //n이 0일때는 옷입는경우의 수 당연히 0
		else {
			map<string, int> m;
			
			for(int i=0; i<n; i++){
				string clothe,clothetype;
				cin >> clothe >> clothetype;
        		if(m.find(clothetype) != m.end()){          //이미 맵에 해당 종류 있으면
        		    m[clothetype]++;                     //그 종류의 가짓수(value) 1 증가
        		}
       			else{
           			m[clothetype] = 1;
        		    // m.insert(make_pair(clothetype,1));         //없으면 1로 초기화해서 추가
        		}				
			}
	
              	
        	for(auto it=m.begin(); it!=m.end(); it++){
        		answer *= (it->second)+1;
//        	key  value
//			1     3
//			2     2
//			3     1
//        	-> (3+1) * (2+1) * (1*1) -> 24
//        	24 -1     //아무것도 안입는 경우(알몸) 인경우 빼줘야됨 
			}
	    	answer=answer-1;
		} 
		
		cout << answer << "\n";				
	}


}