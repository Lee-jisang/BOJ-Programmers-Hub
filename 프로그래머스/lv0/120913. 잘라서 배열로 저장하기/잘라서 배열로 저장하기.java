class Solution {
    public String[] solution(String my_str, int n) {
        int p=0;
        if(my_str.length()%n != 0) p = my_str.length()/n+1;
        else p = my_str.length()/n;
        String[] answer = new String[p];
        int a=0;
        for(int i=0; i<answer.length; i++){
            if(a+n>my_str.length()) {
                answer[i] = my_str.substring(a,my_str.length());
                break;
            }     
            answer[i]= my_str.substring(a,a+n);
            a=a+n;
        }  
        return answer;
    }
}