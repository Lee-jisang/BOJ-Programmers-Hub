import java.util.*;
class Solution {
    public List<Integer> solution(int[] arr, int[][] queries) {
        List<Integer> list = new ArrayList<>();
        for(int i=0; i<queries.length; i++){
            int min = 1000000;
            for(int j=queries[i][0]; j<=queries[i][1]; j++){
                if(arr[j]>queries[i][2]){
                    if(min>arr[j])
                        min = arr[j];
                }
            }
            if(min==1000000) list.add(-1);
            else list.add(min);
        }
        return list;
    }
}