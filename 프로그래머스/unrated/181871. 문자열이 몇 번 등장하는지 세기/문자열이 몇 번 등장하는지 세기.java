class Solution {
    public int solution(String myString, String pat) {
        int answer = 0;
        int a = myString.length()-pat.length()+1;     
        for(int i=0; i<a; i++){
            //System.out.println(myString.substring(i,i+pat.length()));
            String b = myString.substring(i,i+pat.length());
            if(pat.equals(b))
                answer++;
        }
        return answer;
    }
}