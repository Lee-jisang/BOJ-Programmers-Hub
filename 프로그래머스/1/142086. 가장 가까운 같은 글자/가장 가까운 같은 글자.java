class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        int[] check = new int[26];
        for(int i=0; i<s.length(); i++){
            check[s.charAt(i)-'a']++;
            if(check[s.charAt(i)-'a']==1){
                answer[i]=-1;
                continue;
            }
            else{
                int cnt = 0;
                for(int j=i-1; j>=0; j--){
                    cnt++;
                    if(s.charAt(i)==s.charAt(j)){
                        answer[i]=cnt;
                        break;
                    }
                }
            }
        }
    
        System.out.println(check[0]);
        return answer;
    }
}