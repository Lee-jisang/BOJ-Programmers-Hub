#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{

    arr.erase(unique(arr.begin(), arr.end()),arr.end());

    vector<int> answer = arr;
    return answer;
}


// #include <vector>
// #include <iostream>

// using namespace std;

// vector<int> solution(vector<int> arr)
// {
//     vector<int> answer;
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == arr[i + 1]) {
//             if(i+1==arr.size()){
//                 answer.push_back(arr[i]);
//                 break;
//             }
//             continue;
//         }
//         else {
//             answer.push_back(arr[i]);
//         }
//     }
//     return answer;
// }

