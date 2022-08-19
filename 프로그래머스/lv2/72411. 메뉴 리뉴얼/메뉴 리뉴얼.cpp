#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    

    for (int i = 0; i < course.size(); i++) {//1
        map<string,int> m;
        int r = course[i];
        for (int j = 0; j < orders.size(); j++) {//2
            if(orders[j].length()<r) continue;
            sort(orders[j].begin(),orders[j].end());
            vector<bool> temp(orders[j].length(), true);
                  
            for (int k = 0; k < r; k++)
                temp[k] = false;

            do {
                string s= "";
                for (int k = 0; k < orders[j].length(); k++) {
                    if (temp[k] == false){
                        //cout << orders[j][k] << " ";
                        s += orders[j][k];
                    }        
                }
                m[s] += 1;
                cout << s;
                cout << endl;
            } while (next_permutation(temp.begin(), temp.end()));
            
        }//2
        int max=0;
        string ans;
        vector<pair<string,int>> v(m.begin(), m.end()); 
        vector<pair<int,string>> v2;       
        for(int p=0; p<v.size(); p++){
            v2.push_back({v[p].second,v[p].first});
            //cout << v[p].first << v[p].second<< " ";
        }
        sort(v2.begin(),v2.end(),greater<>());
        for(int p=0; p<v.size(); p++){
            if(v2[p].first>=2){
                answer.push_back(v2[p].second);
                cout << v2[p].first << v2[p].second<< " ";
            }
            
            if(v2[p].first != v2[p+1].first) break;
            
        }
        //cout << ans << " "<< max <<"\n";
    }//1
    sort(answer.begin(),answer.end());
    return answer;
}



