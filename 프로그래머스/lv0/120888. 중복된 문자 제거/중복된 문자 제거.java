import java.util.*;
class Solution {
    public String solution(String my_string) {
        String answer = "";
        Set<Character> set = new HashSet<>();
        for (char c : my_string.toCharArray()) {
            if (set.add(c)) {
                  answer += c+"";
             }
        }
        return answer;
    }
}