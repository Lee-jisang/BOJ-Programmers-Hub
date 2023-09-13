class Solution {
    public String solution(String myString) {
        String answer = "";
        for(int i=0; i<myString.length(); i++){
            if(myString.charAt(i)=='a')
                answer += "A";    
            else if('B' <= myString.charAt(i) && myString.charAt(i)<='Z' )
                answer += (myString.charAt(i)+"").toLowerCase();
            else
                answer +=  (myString.charAt(i)+"");
        }
        return answer;
    }
}