import java.util.List;
import java.util.ArrayList;
class Solution {
    public Integer[] solution(int l, int r) {
        Integer[] answer = new Integer[1];
        List<Integer> list = new ArrayList<>();
        
        for(int i=l; i<=r; i++){
            if(i%5==0){
                String s = i+"";
                int cnt = 0;
                for(int j=0; j<s.length(); j++){
                    if(s.charAt(j)=='5' || s.charAt(j)=='0'){
                        cnt++;
                    }  
                    if(cnt==s.length()) list.add(i);
                }             
            }
        }
        Integer arr[] = list.toArray(new Integer[list.size()]);
        if(list.isEmpty()){
            answer[0] = -1;
            return answer;
        }else{
            return arr;
        }

    }
}