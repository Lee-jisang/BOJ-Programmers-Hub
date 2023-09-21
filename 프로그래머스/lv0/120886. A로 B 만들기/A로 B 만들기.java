import java.util.*;
class Solution {
    public int solution(String before, String after) {      
        String b[] = before.split("");
        Arrays.sort(b);
        String a[] = after.split("");
        Arrays.sort(a);
        if(Arrays.equals(a,b)) return 1;
        else return 0;
    }
}