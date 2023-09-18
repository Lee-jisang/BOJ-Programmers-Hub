import java.util.*;
class Solution {
    public int solution(int[] rank, boolean[] attendance) {
        int answer = 0;
        TreeMap<Integer, Integer> map = new TreeMap<Integer, Integer>();
        for(int i=0; i<rank.length; i++){
            if(attendance[i]==false) continue;
            map.put(rank[i],i);
        }
        //map.put(1, true);
        // Set<Integer> keySet = map.keySet();
        // for (Integer key : keySet) {
        //     System.out.println("KEY: " +  key + " / VALUE: " + map.get(key));
        // }
        
        List<Integer> list = new ArrayList<Integer>();
        map.forEach((key, value) -> {
            list.add(value);
            System.out.println("KEY: " +  key + " / VALUE: " + value);
        });       
        return list.get(0)*10000+list.get(1)*100+list.get(2)*1;
    }
}