import java.util.*;
class Solution {
    public String solution(String my_string) {
        String answer = my_string.toLowerCase();
        char a[] = answer.toCharArray();
        Arrays.sort(a);
        String b = new String(a);
        return b;  
    }
}