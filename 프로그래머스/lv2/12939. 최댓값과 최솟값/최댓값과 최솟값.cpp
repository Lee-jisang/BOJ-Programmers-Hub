#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    
    stringstream ss(s);
    ss.str(s);

    string word;
    vector<int> v;
    while(ss >> word) {
        v.push_back(stoi(word));
        //cout << word;
    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
    string answer = "";
    answer += to_string(v[0]);
    answer += " ";
    answer += to_string(v[v.size()-1]);
    return answer;
    
   

    
}