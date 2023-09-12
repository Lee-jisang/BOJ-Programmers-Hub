class Solution {
    public int[] solution(int start, int end_num) {
        int[] answer = new int[start-end_num+1];
        int n = start;
        for(int i=0; i<start-end_num+1; i++){
            answer[i]=n;
            n--;
        }
        return answer;
    }
}