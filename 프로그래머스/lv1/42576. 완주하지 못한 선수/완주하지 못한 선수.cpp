#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string,int> m;
    string answer="";
    for(int i=0; i<participant.size(); i++) m[participant[i]]+=1; 
    for(int i=0; i<completion.size(); i++) m[completion[i]]-=1; 
    for(auto it=m.begin(); it!=m.end(); it++)
        if(it->second==1) answer= it->first;   
    return answer;
}