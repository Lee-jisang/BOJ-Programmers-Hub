class Solution {
    public String solution(String bin1, String bin2) {
        String answer = "";
        //Integer.toBinaryString(십진수 정수) : 십진수->이진수
        //Integer.parseInt(이진수 문자열,2): 이진수 문자열-> 십진수 정수
        int sum = Integer.parseInt(bin1,2)+Integer.parseInt(bin2,2); 
        return Integer.toBinaryString(sum)+"";
    }
}