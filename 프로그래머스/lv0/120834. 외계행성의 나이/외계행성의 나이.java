class Solution {
    public String solution(int age) {
        String answer = "";
        char s[] = {'a','b','c','d','e','f','g','h','i','j'};
        for(int i=0; i<(age+"").length(); i++){
            answer += (s[(age+"").charAt(i)-'0']+"");
        }
        return answer;
    }
}