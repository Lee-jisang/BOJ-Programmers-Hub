import java.util.*;

class Solution {
    public List<String> solution(String[] quiz) {
        List<String> list = new ArrayList<>();
        
        for(int i=0; i<quiz.length; i++){
            String[] Arraystr = quiz[i].split(" ");       
            if(Arraystr[1].equals("-")){
                if(Integer.parseInt(Arraystr[0])-Integer.parseInt(Arraystr[2]) == Integer.parseInt(Arraystr[4]))
                    list.add("O");
                else 
                    list.add("X");
            }else{
                if(Integer.parseInt(Arraystr[0])+Integer.parseInt(Arraystr[2]) == Integer.parseInt(Arraystr[4]))
                    list.add("O");
                else 
                    list.add("X");
            }           
        }
        return list;
    }
    
}


