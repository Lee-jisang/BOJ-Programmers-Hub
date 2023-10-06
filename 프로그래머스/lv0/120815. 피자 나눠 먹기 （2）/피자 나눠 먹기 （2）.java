//n과 6의 최소공배수
class Solution {
    public int solution(int n) {
        int i=n;
        while(n%6!=0) n += i; 
        return n/6;
    }
}