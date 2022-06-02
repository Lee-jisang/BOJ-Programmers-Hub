#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
       
    vector<int> answer;

    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < 6; i++) {
        if (lottos[i] == 0)
            cnt1++;
        for (int j = 0; j < 6; j++) {
            if (lottos[i] == win_nums[j]) {
                cnt++;
                break;
            }
        }
    }
    if (cnt == 0 && cnt1 != 0){
        answer.push_back(7 - cnt1);
        answer.push_back(6);
    }
    else if (cnt1 == 0 && cnt != 0) {
        answer.push_back(7 - cnt);
        answer.push_back(7 - cnt);
    }
    else if (cnt1 == 0 && cnt == 0) {
        answer.push_back(6);
        answer.push_back(6);
    }
    else {
        answer.push_back(7 - (cnt + cnt1));
        answer.push_back(7 - cnt);
    }

    return answer;
}