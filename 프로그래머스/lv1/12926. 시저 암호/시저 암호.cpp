#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
    for(int j=0; j<n; j++){
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                continue;
            }
            else if(s[i]=='z' || s[i]=='Z'){
                s[i]=s[i]-25;
            } 
            else{
                s[i]=s[i]+1;
            }         
        }  
    }
    return s;
}