class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        for(int i=0; i<queries.length; i++){
            int tmp=0;
            for(int j=0; j<1; j++){
                tmp = arr[queries[i][0]];
                arr[queries[i][0]]=arr[queries[i][1]];
                arr[queries[i][1]] = tmp;
            }
        }
        return arr;
    }
}