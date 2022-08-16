/* 시간초과
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());   
    for(int i=0; i<phone_book.size()-1; i++){
        for(int j=i+1; j<phone_book.size(); j++){
            if(phone_book[i] == phone_book[j].substr(0,phone_book[i].length())){
                return false;
            }
        }       
    }
    return true;
}*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_map<string, int> hash_map;
    
    for(int i = 0; i < phone_book.size(); i++)
        hash_map[phone_book[i]] = 1;

    for(int i = 0; i < phone_book.size(); i++) {
        string phone_number = "";
        for(int j = 0; j < phone_book[i].size(); j++) {
            phone_number += phone_book[i][j];
            if(hash_map[phone_number] && phone_number != phone_book[i])//자기자신이면 안됨
                return false;
        }
    }
    return true;
}