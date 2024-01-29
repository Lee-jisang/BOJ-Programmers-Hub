class Solution {
    public String solution(int[] food) {
        String answer = "";
        //홀수개면 무조건 -1 해서 짝수를 만들어야함
        for(int i=1; i<food.length; i++){
            if(food[i]%2==1) food[i]=food[i]-1;
            for(int j=0; j<food[i]/2; j++){
                answer += (i+"");
            }
        }
        //문자열 뒤집기
        StringBuffer sb = new StringBuffer(answer);      
        String reverse = sb.reverse().toString();
        return answer+"0"+reverse;
    }
}         