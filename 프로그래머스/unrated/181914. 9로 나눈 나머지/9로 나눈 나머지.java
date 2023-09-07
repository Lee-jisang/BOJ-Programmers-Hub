//길이가 긴 문자열을 int나 long으로 바꾸는 것이 아님
//각 자릿수의 합이였음
//문자열 배열을 만들어서 split으로 하나씩 담음
class Solution {
    public int solution(String number) {
        //String[] number_list = number.split("");
        int sum=0;
        for(int i=0; i<number.length(); i++){
            sum += (number.charAt(i)-'0');
        }
        int answer = sum%9;
        return answer;
    }
}