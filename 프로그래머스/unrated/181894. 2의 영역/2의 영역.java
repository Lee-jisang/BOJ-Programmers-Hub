import java.util.List;
import java.util.ArrayList;

class Solution {
    public Integer[] solution(int[] arr) {
        List<Integer> list = new ArrayList<Integer>();
        List<Integer> list2 = new ArrayList<Integer>();
        for(int i=0; i<arr.length; i++){
            if(arr[i]==2){
                list.add(i);
                System.out.print(i);     
            }
        }
        Integer[] answer = {-1}; //리스트가 비어있을때
        if(list.isEmpty()) return answer;
        else{
            for(int i=list.get(0); i<=list.get(list.size()-1); i++){
                list2.add(arr[i]);
            }
        }      
        return list2.toArray(new Integer[list2.size()]);
    }
}