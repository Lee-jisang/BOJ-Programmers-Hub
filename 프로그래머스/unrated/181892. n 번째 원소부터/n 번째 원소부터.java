class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = new int[num_list.length-n+1]; 
        int p = 0;
        for(int i=n-1; i<num_list.length; i++){
            //System.out.print(num_list[i]);
            answer[p++]=num_list[i];
        }  
        return answer;
    }
}