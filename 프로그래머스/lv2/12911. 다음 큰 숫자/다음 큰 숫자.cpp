#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;  

    int cnt=0;
    string binary = bitset<16>(n).to_string();
    for(int i=0; i<binary.length(); i++){
        if(binary[i]=='1')
            cnt++;
    }
    
    while(1){
        n=n+1;
        string binary2 = bitset<16>(n).to_string();
        int cnt2=0;
        for(int i=0; i<binary2.length(); i++){
            if(binary2[i]=='1'){
                cnt2++; 
            }        
        }
        if(cnt2==cnt) break;
    }
 
    return n;
}


