import java.util.*;

class Solution {
    public int solution(int[] arr) {
        int answer = 0;
        int cnt = 0;
        for(int j=0; j<10; j++){
            int x[] = new int[arr.length];
            for(int i=0; i<arr.length; i++){
                if(arr[i]>=50 && (arr[i]%2==0)){
                    x[i]=arr[i]/2;
                }else if(arr[i]<50 && (arr[i]%2==1)){
                    x[i]=arr[i]*2+1;
                }
            }
            if(Arrays.equals(arr,x)){
                break;
            }
            cnt++;
            arr =  x.clone();
        }
        return cnt-1; 

    }
}