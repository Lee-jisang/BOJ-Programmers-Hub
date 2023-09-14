import java.util.*;
class Solution {
    public List<String> solution(String myStr) {
        String[] answer = {};
        List<String> list = new ArrayList<String>();
        myStr = myStr.replace("a"," ");
        myStr = myStr.replace("b"," ");
        myStr = myStr.replace("c"," ");
        answer = myStr.split(" ");
        for(int i=0; i<answer.length; i++){
            if(answer[i].equals("")) continue;
            list.add(answer[i]);
        }       
        if(list.isEmpty()){
            list.add("EMPTY");
            return list;
        }else return list;
    }
}