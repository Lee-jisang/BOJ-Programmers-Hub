import java.util.*;
class Solution {
    public List<Integer> solution(String myString) {
        int[] answer = {};
        List<Integer> list = new ArrayList<Integer>();

        String s[] = myString.split("x");
        for(int i=0; i<s.length; i++)
            list.add(s[i].length());
        
        if(myString.charAt(myString.length()-1)=='x') list.add(0);
        
        return list;
    }
}