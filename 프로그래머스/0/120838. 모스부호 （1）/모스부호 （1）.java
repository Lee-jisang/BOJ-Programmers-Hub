import java.util.*;
class Solution {
    public String solution(String letter) {
        String answer = "";
        String morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        String a[] = letter.split(" ");
        for(int i=0; i<a.length; i++){
            answer += (char)(Arrays.asList(morse).indexOf(a[i])+'a');
        }
        return answer;
    }
}