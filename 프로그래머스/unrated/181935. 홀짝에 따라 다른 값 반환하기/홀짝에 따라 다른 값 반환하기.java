class Solution {
    public int solution(int n) {
        int sum = 0;
        for(int i=0; i<=n; i++){
            if(n%2==0){
                if(i%2==0) sum += Math.pow(i,2);
            }else{
                if(i%2==1) sum += i; 
            }
        }
        return sum;
    }
}