import java.util.*;
class Solution {
    public int solution(String my_string) {
        String a = "";
        for(int i=0; i<my_string.length(); i++){
            if('0' <= my_string.charAt(i) && '9' >= my_string.charAt(i) ){
                a += (my_string.charAt(i)+"");
            }else{
                a += " ";
            }
        }
        List<String> list = new ArrayList<>();
        String[] s = a.split(" ");
        int sum = 0;
        for(int i=0; i<s.length; i++){
            if(!s[i].equals(""))
                sum += Integer.parseInt(s[i]);
        }
        return sum;
    }
}