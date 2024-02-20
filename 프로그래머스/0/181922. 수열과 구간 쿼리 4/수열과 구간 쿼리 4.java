class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        //0은 모든수의 배수
        for(int i=0; i<queries.length; i++){
            for(int j=queries[i][0]; j<=queries[i][1]; j++){
                if(j%queries[i][2]==0) arr[j] += 1;
            }
        }
        return arr;
    }
}