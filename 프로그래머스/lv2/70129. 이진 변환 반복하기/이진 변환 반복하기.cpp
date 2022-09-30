#include <string>
#include <vector>
#include <regex>
#include <iostream>
#include <bitset>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int k=0;
    int sum=0;
    while(s != "1"){
        k++;
        int cnt=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0') {
                cnt++;
            }
        }
        sum += cnt;
        string p="";
        int decimal = s.length()-cnt;
        while(decimal != 0) {
            if (decimal % 2 == 1) // 나머지가 1
                p+="1";
            else			// 나머지가 0
                p+="0";
    
            decimal /= 2; 		// X가 0이 될 때까지 2로 계속해서 나눈다.
        }
        reverse(p.begin(),p.end());
        s = p;    
       
    }
    answer.push_back(k);
    answer.push_back(sum);
    return answer;
}