import java.util.*;
class Solution {
    public List<Integer> solution(String my_string) {
        List<Integer> list = new ArrayList<>();
        char a[] = my_string.toCharArray();
        Arrays.sort(a);
        String b = new String(a);
        for(int i=0; i<b.length(); i++){
            if('0' <= b.charAt(i) && b.charAt(i) <= '9')
                list.add(b.charAt(i)-'0');   
        }
        return list;
    }
}