import java.util.Arrays;

class Solution {
    public String solution(String my_string, int num1, int num2) {
        String[] s = my_string.split(""); //문자열->문자열 배열
        
        String tmp = "";
        tmp = s[num1];
        s[num1] = s[num2];
        s[num2] = tmp;
        String answer = String.join("",s);//문자열 배열->문자열
            
        return answer;
    }
}