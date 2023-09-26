import java.util.*;
class Solution {
    public int solution(int n) {
        int answer = 0;
        List<Integer> list = new ArrayList<>();
        for(int i=1; i<=200; i++){
            if(i%3==0) continue;
            if((i+"").contains("3")) continue;
            list.add(i);
        }
        return list.get(n-1);
    }
}