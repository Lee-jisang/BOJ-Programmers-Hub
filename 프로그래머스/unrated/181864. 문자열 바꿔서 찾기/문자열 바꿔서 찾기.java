class Solution {
    public int solution(String myString, String pat) {
        String answer = "";
        for(int i=0; i<myString.length(); i++){
            if(myString.charAt(i)=='A') answer += "B";
            else answer += "A";
        }
        if(answer.contains(pat)) return 1;
        else return 0;
    }
}