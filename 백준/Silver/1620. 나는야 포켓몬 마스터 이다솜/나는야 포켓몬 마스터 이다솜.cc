#include <iostream>
#include <vector>    
#include <string>
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;// N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수
	cin >> N >> M;
	unordered_map<string, int> m;
	unordered_map<int, string> m2;
	string name;
	for(int i=1; i<= N; i++){
		cin >> name;
		m[name]=i;
		m2[i]=name; 
	}	
	string Q;
	for(int i=1; i<= M; i++){
		while(cin >> Q){
			if(isdigit(Q[0])==true){
				cout << m2[stoi(Q)] << "\n";
			}else{
				cout << m[Q] << "\n";
			}			
		}		
	}
}