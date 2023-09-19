class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i=0; i<(n+"").length(); i++ ){
            answer += ((n+"").charAt(i)-'0');
        }  
        return answer;
    }
}