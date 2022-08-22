#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int temp;
    if(n>m){
        temp=m;
        m=n;
        n=temp;    
    }
    
    vector<int> v1;
    vector<int> v2;
    for(int i=1; i<=n; i++){
        if(n%i==0) v1.push_back(i);
    }
    for(int i=1; i<=m; i++){
        if(m%i==0) v2.push_back(i);
    }
    
    for(int i=v1.size()-1; i>=0; i--){
        if(find(v2.begin(),v2.end(),v1[i])!=v2.end()){
            answer.push_back(v1[i]);
            break;
        }
    }
    
    if(m%n==0) answer.push_back(m);
    else{
        answer.push_back((n*m)/answer[0]);  
    }
    
    return answer;
}