#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt=0;
    for(int j=1; j<n; j++){
        int sum = 0;
        for(int i=j; i<n; i++) {
            sum +=i;
            if(sum == n) {
                cnt++;
                break;
            } else if(sum > n) 
                break;
        }        
    }
    
    return cnt+1;
}