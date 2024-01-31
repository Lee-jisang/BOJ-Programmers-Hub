class Solution {
    public int solution(int[] numbers, int k) {       
        int i=0;
        int cnt=0;
        while(true){
            if(i>numbers.length){
                i = i-numbers.length;
            }            
            i=i+2;
            cnt++;
            if(cnt==k) break;
        }
        return i-1;
    }
}