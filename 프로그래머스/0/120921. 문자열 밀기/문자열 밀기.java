class Solution {
    public int solution(String A, String B) {
        int answer = -1;
        int len = A.length();
        String C = "";
        if(A.equals(B)) return 0;
        else{
            for(int i=A.length(); i>=0; i--){
                //System.out.println(i+" "+A.substring(len-i,len)+" "+A.substring(0,len-i));
                C = A.substring(len-i,len)+A.substring(0,len-i);
                if(C.equals(B)) answer=i;
            }
            return answer;            
        }
    }
}