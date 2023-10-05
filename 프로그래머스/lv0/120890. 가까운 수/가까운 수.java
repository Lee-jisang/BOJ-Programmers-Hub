import java.util.*;
class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        int min = 101;
        Arrays.sort(array);
        for(int i=0; i<array.length; i++){
     
            if(min > Math.abs(array[i]-n)){
                min = Math.abs(array[i]-n);
                
                answer = array[i];
            }         
        }       
        return answer;
    }
}