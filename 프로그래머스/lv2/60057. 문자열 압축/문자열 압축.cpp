#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    if(s.length()==1){
        return 1;
    }
    //int k=0;
    int min=1001;
    for(int i=s.length()/2; i>=1; i--){   
        vector<string> v;
        for(int j=0; j<=s.length()-1; j=j+i){  
            v.push_back(s.substr(j,i));
        }     
        
        for(int j=0; j<v.size()-1; j++){  
            for(int k=j+1; k<v.size(); k++){
                if(v[j]==v[k]) v[k]="*";
                else break;  
            } 
        }
     
        int sum=0;
        for(int j=0; j<v.size(); j++){        
            int cnt=0;
            for(int k=j+1; k<v.size(); k++){
                if(v[j]!=v[k] && v[k]=="*"){
                    cnt++;
                    continue;
                }else{
                    break;
                }            
            }      
            if(1<=cnt && cnt<=8){
                sum += v[j].length()+1;
            }else if(9<=cnt && cnt<=98){
                sum += v[j].length()+2;
            }else if(99<=cnt && cnt<=998){
                sum += v[j].length()+3;  
            }else if(cnt==999){
                sum += v[j].length()+4;
            }else{//cnt가 0일때
                if(v[j]!="*") sum += v[j].length();                  
            }     
        }
        if(min>sum) min=sum;         
    }
    return min;
}