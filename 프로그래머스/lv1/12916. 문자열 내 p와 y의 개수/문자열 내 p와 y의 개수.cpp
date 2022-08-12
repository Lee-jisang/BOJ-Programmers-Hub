#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{ 
    int p=0;
    int y=0;
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='p' || s[i]=='P'){
            p++;
            cnt++;
        }else if(s[i]=='y' || s[i]=='Y'){
            y++;
            cnt++;
        }
    }
    if(p==y || cnt==0){
        return true;
    }else{
        return false;
    }
}