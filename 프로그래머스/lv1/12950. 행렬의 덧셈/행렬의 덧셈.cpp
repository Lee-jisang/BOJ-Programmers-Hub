#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size());//초기화 꼭해줘야함
    for(int i=0; i<arr1.size(); i++){//행의 수
        for(int j=0; j<arr1[i].size(); j++){//열의 수
              answer[i].push_back(arr1[i][j]+arr2[i][j]);
        }
    }
    return answer;
}