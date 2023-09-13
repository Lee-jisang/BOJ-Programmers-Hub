class Solution {
    public int solution(int[] num_list) {
        int osum=0;
        int esum=0;
        for(int i=0; i<num_list.length; i++){
            if(i%2==0){ //i=0 ->1 홀수
                osum += num_list[i];
            }else{ //짝수
                esum += num_list[i];
            }
        }
        return (osum > esum) ? osum : esum;
    }
}