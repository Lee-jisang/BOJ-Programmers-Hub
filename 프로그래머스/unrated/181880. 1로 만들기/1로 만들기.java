class Solution {
    public int solution(int[] num_list) {
        int sum = 0;
        int i=0;
        for(int k =0; k<num_list.length; k++){
            while(num_list[k]!=1){
                if(num_list[k]%2==0){
                    num_list[k] /= 2;
                    i++;
                }else{
                    num_list[k] = (num_list[k]-1)/2;
                    i++;
                }
             }  
        } 
        return  i;
    }
}