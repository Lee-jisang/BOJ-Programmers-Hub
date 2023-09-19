import java.util.*;
class Solution {
    public List<Integer> solution(int[] numbers, int num1, int num2) {
        List<Integer> list = new ArrayList<>();    
        
        for(int i=0; i<numbers.length; i++)
            list.add(numbers[i]);
        
        return list.subList(num1,num2+1);
    }
}