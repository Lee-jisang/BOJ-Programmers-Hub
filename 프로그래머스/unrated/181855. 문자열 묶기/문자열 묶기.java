import java.util.*;
class Solution {
    public int solution(String[] strArr) {
        int answer = 0;
        int a[] = new int[strArr.length];
        int b[] = new int[30];
        
        for(int i=0; i<strArr.length; i++){
            a[i]=strArr[i].length();
        }
        for(int i: a)
            b[i-1]++;
        
        Arrays.sort(b);
        return b[29];
    }
}