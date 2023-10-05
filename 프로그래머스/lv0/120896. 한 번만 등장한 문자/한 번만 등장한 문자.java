class Solution {
    public String solution(String s) {
        int a[] = new int[26];
        String answer = "";
        for(int i=0; i<s.length(); i++){
            a[s.charAt(i)-'a']++;
        }
        for(int i=0; i<26; i++){
            if(a[i]==1){
                answer += (char)(i+'a')+"";
            }
        }
        return answer;
    }
}