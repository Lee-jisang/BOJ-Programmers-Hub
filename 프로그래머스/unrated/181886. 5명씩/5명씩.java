class Solution {
    public String[] solution(String[] names) {    
        int a = names.length%5==0 ? names.length/5 :names.length/5+1;
        String[] answer = new String[a];
        int k = 0;
        for(int i=0; i<names.length; i++){
            if(i%5==0) 
                 answer[k++] = names[i];
        }
        return answer;
    }
}