class Solution {
    public String solution(String myString, String pat) {
        String answer = "";
        int p = myString.lastIndexOf(pat); //뒤에서부터 인덱스를 찾음
        return myString.substring(0,p+pat.length());
    }
}