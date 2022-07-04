#include <iostream>
#include <vector>    
#include <string>
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	
	unordered_map<int, bool> m1;
	unordered_map<int, bool> m2;
	vector<int> v;
	
	int A;
	for(int i=0; i<a; i++){
		cin >> A;
		m1[A]=true;
		v.push_back(A);
	}
	
	int B;
	for(int i=0; i<b; i++){
		cin >> B;
		m1[B]=false;
		m2[B]=true;
	}
	
	for(int i=0; i<a; i++){
		m2[v[i]]=false;
	}

	
	int cnt1=0;
	for(auto it=m1.begin(); it!=m1.end(); it++){
		if(it->second == true){
			cnt1++;
		}
	}
	int cnt2=0;
	for(auto it=m2.begin(); it!=m2.end(); it++){
		if(it->second == true){
			cnt2++;
		}
	}
	cout << cnt1 + cnt2;
	
}