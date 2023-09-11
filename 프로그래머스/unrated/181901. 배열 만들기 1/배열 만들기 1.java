import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
class Solution {
    public Integer[] solution(int n, int k) {

        List<Integer> list = new ArrayList<>();
        for(int i=1; i<=n; i++){
            if(i%k==0) list.add(i);
        }
        int arrListSize = list.size();
        Integer arr[] = list.toArray(new Integer[arrListSize]);
     
        return arr;
    }
}

