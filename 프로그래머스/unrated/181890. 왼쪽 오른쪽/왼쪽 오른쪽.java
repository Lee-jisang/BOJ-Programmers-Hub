import java.util.*;

class Solution {
    public List<String> solution(String[] str_list) {
        String[] answer = {};
        List<String> list = new ArrayList<String>();
        for(int i=0; i<str_list.length; i++)
            list.add(str_list[i]);
        
        if(list.size()==1){
            list.remove(0);
            return list;
        }
        if(list.contains("l") || list.contains("r")){
            for(int i=0; i<str_list.length; i++){
                if(str_list[i].equals("l")){
                    list = list.subList(0,i);
                    return list;
                }else if(str_list[i].equals("r")){
                    list = list.subList(i+1,list.size());
                    return list;
                }
            }            
        }else{
            return list;
        }
        

        return list;
  
    }
}