import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
class Solution {
    public List<Integer> solution(int[] arr, int[] query) {
        int[] answer = {};
        List<Integer> list = new ArrayList<Integer>();
        for(int i=0; i<arr.length; i++){
            list.add(arr[i]);
        }
        for(int i=0; i<query.length; i++){
            if(i%2==0){//짝수 뒷부분
                list.subList(query[i]+1,list.size()).clear();
            }else{//홀수 앞부분
                list.subList(0,query[i]).clear();
            }
        }
        return list;
    }
}