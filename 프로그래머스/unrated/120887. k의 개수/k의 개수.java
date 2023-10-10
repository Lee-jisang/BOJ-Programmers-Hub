class Solution {
    public int solution(int i, int j, int k) {
        int answer = 0;
        for(int r=i; r<=j; r++){
            for(int p=0; p<(r+"").length(); p++){
                if(k+'0' == (r+"").charAt(p)){
                    answer++;
                }
            }
        }
        return answer;
    }
}