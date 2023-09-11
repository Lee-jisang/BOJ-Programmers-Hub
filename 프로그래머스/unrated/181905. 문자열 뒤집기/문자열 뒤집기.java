//replace
class Solution {
    public String solution(String my_string, int s, int e) {     
        String p = my_string.substring(s,e+1);
        StringBuilder sb = new StringBuilder(p);
        String re = sb.reverse().toString();
        StringBuilder o = new StringBuilder(my_string);
        String answer = o.replace(s,e+1,re).toString();
        return answer;
    }
}