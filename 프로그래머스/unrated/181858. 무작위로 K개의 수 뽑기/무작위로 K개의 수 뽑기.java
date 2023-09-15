import java.util.*;
class Solution {
    public int[] solution(int[] arr, int k) {
        int[] answer = new int[k];
        arr = Arrays.stream(arr).distinct().toArray(); // [1, 2, 3, 4, 5]
        if(arr.length>=k){
            for(int i=0; i<k; i++)
                answer[i]=arr[i];
        }else{
            for(int i=0; i<arr.length; i++)
                answer[i]=arr[i];
            for(int i=arr.length; i<k; i++)
                answer[i]=-1;
        }
        return answer;
    }
}