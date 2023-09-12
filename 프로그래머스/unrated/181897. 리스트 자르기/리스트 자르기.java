import java.util.List;
import java.util.ArrayList;
class Solution {
    public Integer[] solution(int n, int[] slicer, int[] num_list) {
        List<Integer> list = new ArrayList<Integer>();
        Integer a[] = {};
        if(n==1){     
            for(int i=0; i<=slicer[1]; i++){
                list.add(num_list[i]);
            }
            return list.toArray(new Integer[list.size()]);
        }else if(n==2){
            for(int i=slicer[0]; i<=num_list.length-1; i++){
                list.add(num_list[i]);
            }
            return list.toArray(new Integer[list.size()]);
        }else if(n==3){
            for(int i=slicer[0]; i<=slicer[1]; i++){
                list.add(num_list[i]);
            }           
            return list.toArray(new Integer[list.size()]);
        }else if(n==4){
            for(int i=slicer[0]; i<=slicer[1]; i=i+slicer[2]){
                list.add(num_list[i]);
            }           
            return list.toArray(new Integer[list.size()]);
        }
        return a;
        
    }
}