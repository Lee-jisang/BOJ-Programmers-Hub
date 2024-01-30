class Solution {
    public int solution(int n) {
        int answer = 1;
        int a=0;
        //n이하의 팩토리얼
        for(int i=1; i<=10; i++){
            answer *= i;
            if(answer==n) {
                a = i;
                break;
            }else if(answer>n){
                a = i-1;
                break;   
            }
        }
        return a;
    }
}