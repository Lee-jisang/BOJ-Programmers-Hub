#include <string>
#include <vector>
#include <map>
using namespace std;
char a[8] = {'R','T','C','F','J','M','A','N'};

string solution(vector<string> survey, vector<int> choices) {   
    map<char,int> m;
    for(int i=0; i<8; i++) m[a[i]]=0;  
    for(int i=0; i<survey.size(); i++){  
        if(1 <= choices[i] && choices[i] <=3){
             m[survey[i][0]] += 4-choices[i]; 
        }else if(5 <= choices[i] && choices[i] <=7){
             m[survey[i][1]] += choices[i]-4;         
        }        
    }
    
    string answer = "";  
    if(m['R']>=m['T']) answer += "R";
    else answer += "T";   
    if(m['C']>=m['F']) answer += "C";
    else answer += "F";   
    if(m['J']>=m['M']) answer += "J";
    else answer += "M";    
    if(m['A']>=m['N']) answer += "A";
    else answer += "N";
    return answer;
}