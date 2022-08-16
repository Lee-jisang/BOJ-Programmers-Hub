#include <string>
#include <vector>
using namespace std;

int solution(int num) {
    if(num==1) return 0;
    int answer = 0;
    while(true){
        if(num%2==1){
            answer++;
            num=num*3+1;
        }else{
            answer++;
            num/=2;
            if(num==1){
                return answer;
            }else if(num<1){
                return -1;
            }
        }
    }
}