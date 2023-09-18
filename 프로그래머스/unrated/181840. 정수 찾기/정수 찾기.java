import java.util.*;
class Solution {
    public int solution(int[] num_list, int n) {   
        List<Integer> list = new ArrayList<>();
        for(int i : num_list) list.add(i);    
    
        if(list.contains(n)) return 1;
        else return 0;
    }
}