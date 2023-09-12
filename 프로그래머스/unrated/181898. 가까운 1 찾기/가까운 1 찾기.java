class Solution {
    public int solution(int[] arr, int idx) {
        int answer = 0;
        if(arr[idx]==1) 
            return idx;
        else{
            for(int i=idx; i<arr.length; i++){
                if(arr[i]==1) {
                    answer = i;
                    break;
                }else{
                    answer = -1;
                }                   
            }
        }
        return answer;
    }
}