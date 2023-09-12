class Solution {
    public String solution(String my_string, int[] indices) {
        String answer = "";
        StringBuilder sb = new StringBuilder(my_string);
        for(int i=0; i<indices.length; i++){
            sb = sb.replace(indices[i],indices[i]+1," ");
        }
        String s = sb.toString();
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) != ' '){
                answer += (s.charAt(i)+"");
            }
        }
        return answer;
    }
}