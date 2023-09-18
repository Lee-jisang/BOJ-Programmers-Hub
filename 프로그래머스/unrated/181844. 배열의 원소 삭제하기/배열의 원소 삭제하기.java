import java.util.*;
class Solution {
    public List<Integer> solution(int[] arr, int[] delete_list) {
        List<Integer> delist = new ArrayList<>();
        for(int i=0; i<delete_list.length; i++)
            delist.add(delete_list[i]);
      
        List<Integer> list = new ArrayList<>();
        for(int i=0; i<arr.length; i++){
            if(delist.contains(arr[i])) continue;
            list.add(arr[i]);
        }     
        return list;
             
    }
}