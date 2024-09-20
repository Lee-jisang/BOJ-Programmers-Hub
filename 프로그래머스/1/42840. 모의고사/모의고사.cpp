#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a1 = { 1,2,3,4,5 };
    vector<int> a2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> a3 = { 3,3,1,1,2,2,4,4,5,5 };
    int cnt1 = 0;
    int cnt2 = 0; 
    int cnt3 = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        a1.push_back(a1[i % 5]);
        a2.push_back(a2[i % 8]);
        a3.push_back(a3[i % 10]);      
        if (answers[i] == a1[i]) cnt1++;     
        if (answers[i] == a2[i]) cnt2++;
        if (answers[i] == a3[i]) cnt3++;      
    }
    map<int,int> m;
    m[cnt1]=1;
    m[cnt2]=2;
    m[cnt3]=3;
    cout << cnt1 << " " << cnt2 << " " << cnt3 << " ";
    if (cnt1 == cnt2 && cnt2 == cnt3) {
        answer = { 1,2,3 };
        return answer;
    }
    else if (cnt1 == cnt2 && cnt1 != cnt3 && cnt1>cnt3) {
        answer = { 1,2 };
        return answer;
    }
    else if (cnt2 == cnt3 && cnt1 != cnt2 && cnt2>cnt1) {
        answer = { 2,3 };
        return answer;
    }
    else if (cnt1 == cnt3 && cnt1 != cnt2 && cnt1>cnt2) {
        answer = { 1,3 };
        return answer;
    }
    else {
        answer = { m[max({cnt1,cnt2,cnt3})] };
        return answer;
    }
}

