import java.util.*;

class Solution {
    public int solution(int[] array) {
        int a[] = new int[1000];    
        int many=0;
        for(int i=0; i<array.length; i++)
            a[array[i]]++;
        
        int max=-1;    
        for(int i=0; i<a.length; i++){
            if(a[i]>max) {
                max=a[i];
                many = i;
            }
        }
        Arrays.sort(a);

        if(a[a.length-1]==a[a.length-2]) return -1;
        else return many;
        
    
    }
}