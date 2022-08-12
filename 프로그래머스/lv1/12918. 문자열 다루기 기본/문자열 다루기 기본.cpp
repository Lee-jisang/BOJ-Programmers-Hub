#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int cnt=0;
    if( s.length()==4 || s.length()==6){
        for(int i=0; i<s.length(); i++){
            if('0' <= s[i] && '9' >= s[i]){
                cnt++;
            }
        }
    }
    if(cnt==s.length()){
        return true;
    }else{
        return false;
    }
    
}