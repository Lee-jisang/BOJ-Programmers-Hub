import java.util.*;
class Solution {
    public List<String> solution(String myString) {
        String[] answer = myString.split("x");
        List<String> list = new ArrayList<String>();
        for(int i=0; i<answer.length; i++){
            if(answer[i].equals("")) continue;
            else list.add(answer[i]);
        }
             
        list.sort(Comparator.naturalOrder()); //리스트 오름차순 정렬
      
        return list;
    }
}