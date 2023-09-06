class Solution {
    public int[] solution(int[] num_list) {
        int newarr[] = new int[num_list.length+1];
        for(int i=0; i<num_list.length; i++)
            newarr[i]=num_list[i];
        
        if(num_list[num_list.length-1]>num_list[num_list.length-2] )
            newarr[newarr.length-1]=num_list[num_list.length-1]-num_list[num_list.length-2];
        else
            newarr[newarr.length-1]=num_list[num_list.length-1]*2;
               
        return newarr;
    }
}