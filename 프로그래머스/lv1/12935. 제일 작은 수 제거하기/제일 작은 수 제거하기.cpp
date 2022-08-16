#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    answer = arr;
    sort(arr.begin(), arr.end());
    vector<int> a={-1};
    if(arr.size()==1) return a;
    else{
        auto it = find(answer.begin(), answer.end(), arr[0]);
        if (it != answer.end()) {
            answer.erase(answer.begin() + (it - answer.begin()));
        }  
        return answer;      
    }
}