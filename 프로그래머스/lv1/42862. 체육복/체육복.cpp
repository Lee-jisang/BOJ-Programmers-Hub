#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> d;
    for (int i = 0; i < lost.size(); i++) {
        auto it = find(reserve.begin(), reserve.end(), lost[i]);
        if (it != reserve.end()) {
            d.push_back(lost[i]);
        }
    }
    for (int i = 0; i < d.size(); i++) {
        auto it = find(reserve.begin(), reserve.end(), d[i]);
        if (it != reserve.end()) {
            reserve.erase(reserve.begin() + (it - reserve.begin()));
        }
        auto it2 = find(lost.begin(), lost.end(), d[i]);
        if (it2 != lost.end()) {
            lost.erase(lost.begin() + (it2 - lost.begin()));
        }
    }
    if(lost.size()==0) return n;
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());    
    for(int i=0; i<reserve.size(); i++){     
        if(find(lost.begin(), lost.end(), reserve[i]-1) != lost.end()){
            lost.erase( lost.begin()+ ((find(lost.begin(), lost.end(), reserve[i]-1)) - lost.begin()) ); 
            continue;
        }
        else if(find(lost.begin(), lost.end(), reserve[i]+1) != lost.end()){
            lost.erase( lost.begin()+ ((find(lost.begin(), lost.end(), reserve[i]+1)) - lost.begin()) );
            continue;
        }
    }
    return n-lost.size();
}