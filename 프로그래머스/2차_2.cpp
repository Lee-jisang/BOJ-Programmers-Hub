//시간초과
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0; 
    string s="";
    for(int i=0; i<topping.size(); i++){
        s+=to_string(topping[i]);
    }

    for(int i=1; i<=s.size()-1; i++){
        vector<char> v1;
        vector<char> v2;
      
        for(int j=0; j<s.substr(0,i).length(); j++){    
            v1.push_back(s.substr(0,i)[j]);
        }
        sort(v1.begin(),v1.end());
        v1.erase(unique(v1.begin(), v1.end()),v1.end());

        for(int j=0; j<s.substr(i,s.size()).length(); j++){
            v2.push_back(s.substr(i,s.size())[j]);
        }
        sort(v2.begin(),v2.end());
        v2.erase(unique(v2.begin(), v2.end()),v2.end());
        if(v1.size()==v2.size()){
            answer++;
        }
    }
    return answer;
}
