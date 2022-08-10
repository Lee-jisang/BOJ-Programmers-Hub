#include <string>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    vector<pair<string,int>> v1;
    vector<string> v2;
    for (int i = 0; i < dartResult.length(); i++) {
        if (!isdigit(dartResult[i])) {//숫자가 아니면
            string a="";
            a += dartResult[i];
            v2.push_back(a);
        }
        else {
            string a = "";
            a += dartResult[i];
            v1.push_back({a,i});
        }

    }

    for (int i = 0; i < v1.size(); i++) {
        //cout << v1[i].first << " " << v1[i].second << "\n";
        if (v1[i].first == "1") {
            if (i + 1 == v1.size()) break;
            if (v1[i].second + 1 == v1[i + 1].second) {
                v1[i].first = v1[i].first + "0";
                v1.erase(v1.begin() + (i+1));
            }
        }
    }
    for (int i = 0; i < v2.size(); i++) {
        //cout << v1[i].first << " " << v1[i].second << "\n";
        if (v2[i] == "S" || v2[i] == "D" || v2[i] == "T") {
            if (i + 1 == v2.size()) break;
            if (v2[i+1] == "#" || v2[i + 1] == "*") {
                v2[i] = v2[i] + v2[i + 1];
                v2.erase(v2.begin() + (i + 1));
            }
        }
    }
    // for (int i = 0; i < v1.size(); i++) {
    //     cout << v1[i].first << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " ";
    // }
    // cout << "\n";
    vector<int> answer;
    for (int i = 0; i < 3; i++) {
        if (v2[i].length() == 1) {//옵션 없는경우
            if (v2[i] == "S") {
                answer.push_back(pow(stoi(v1[i].first), 1));
            }else if (v2[i] == "D") {
                answer.push_back(pow(stoi(v1[i].first), 2));
            }else if (v2[i] == "T") {
                answer.push_back(pow(stoi(v1[i].first), 3));
            }
        }
        else {//옵션 있는 경우
            if (v2[i][0] == 'S') {
                if (v2[i][1] == '*') {
                    if (i == 0) {
                        answer.push_back(pow(stoi(v1[i].first), 1) * 2);
                    }
                    else {
                        answer[i - 1] = answer[i - 1] * 2;
                        answer.push_back(pow(stoi(v1[i].first), 1) * 2);
                    }       
                }
                else {//#
                    answer.push_back(pow(stoi(v1[i].first), 1) * -1);
                }    
            }
            else if (v2[i][0] == 'D') {
                if (v2[i][1] == '*') {
                    if (i == 0) {
                        answer.push_back(pow(stoi(v1[i].first), 2) * 2);
                    }
                    else {
                        answer[i - 1] = answer[i - 1] * 2;
                        answer.push_back(pow(stoi(v1[i].first), 2) * 2);
                    }
                }
                else {
                    answer.push_back(pow(stoi(v1[i].first), 2) * -1);
                }          
            }
            else if (v2[i][0] == 'T') {
                if (v2[i][1] == '*') {
                    if (i == 0) {
                        answer.push_back(pow(stoi(v1[i].first), 3) * 2);
                    }
                    else {
                        answer[i - 1] = answer[i - 1] * 2;
                        answer.push_back(pow(stoi(v1[i].first), 3) * 2);
                    }
                }
                else {
                    answer.push_back(pow(stoi(v1[i].first), 3) * -1);
                }     
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        ans += answer[i];
    }
    return ans;
}

