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

//시간초과 2
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;

    for(int i=0; i<=topping.size()-2; i++){
        unordered_set<int> v1;
        unordered_set<int> v2;
        for(int j=0; j<=i; j++){
            v1.insert(topping[j]);
        }
        //sort(v1.begin(), v1.end());
        //v1.erase(unique(v1.begin(), v1.end()),v1.end());
        for(int j=i+1; j<=topping.size()-1; j++){
            v2.insert(topping[j]);
        }
        //sort(v2.begin(), v2.end());
        //v2.erase(unique(v2.begin(), v2.end()),v2.end());
        if(v1.size()==v2.size())
            answer++;
    }
    return answer;
}
