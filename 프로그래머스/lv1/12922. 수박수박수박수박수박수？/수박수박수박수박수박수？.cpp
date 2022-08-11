#include <string>
#include <vector>
using namespace std;


string solution(int n) {
    string s = "수";
    string b = "박";
    string answer = "";
    for(int i=0; i<n; i++){
        if(i%2==1) answer += b;
        else answer += s;
    }

    return answer;
}