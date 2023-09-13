class Solution {
    public int solution(String myString, String pat) {
        String m = myString.toUpperCase();
        String p = pat.toUpperCase();
        if(m.contains(p)) return 1;
        else return 0;
    }
}