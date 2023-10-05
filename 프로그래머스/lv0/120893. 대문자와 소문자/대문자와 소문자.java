class Solution {
    public String solution(String my_string) {
        String answer = "";
        for(int i=0; i<my_string.length(); i++){
            if('a' <= my_string.charAt(i) && my_string.charAt(i)<='z')
                answer += (my_string.charAt(i)+"").toUpperCase();
            else
                answer += (my_string.charAt(i)+"").toLowerCase();  
        }     
        return answer;
    }
}