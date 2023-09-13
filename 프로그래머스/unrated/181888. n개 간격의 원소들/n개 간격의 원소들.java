import java.util.*;

class Solution {
    public List<Integer> solution(int[] num_list, int n) {
        List<Integer> list = new ArrayList<Integer>();       
        for(int i=0; i<num_list.length; i=i+n) list.add(num_list[i]);    
        return list;
    }
}