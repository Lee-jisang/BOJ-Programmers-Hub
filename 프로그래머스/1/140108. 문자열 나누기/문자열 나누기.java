class Solution {
    public int solution(String s) {
        int answer = 0;
        char x = s.charAt(0);
        int cnt = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        //배열의 길이 length, 문자열의 길이 length();
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)==x) cnt++;
            else cnt2++;
            if(cnt==cnt2){
                cnt = 0;
                cnt2 = 0;
                cnt3++;
                if(i+1==s.length()) break;
                x = s.charAt(i+1);
                //System.out.println(x);
                continue;
            }else{
                if(i+1==s.length()){
                    cnt3++;
                    break;
                }
            }    
        }           
        return cnt3;
    }
}