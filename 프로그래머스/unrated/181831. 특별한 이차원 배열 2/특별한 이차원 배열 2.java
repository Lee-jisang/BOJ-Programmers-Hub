class Solution {
    public int solution(int[][] arr) {
        int answer = 0;
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr[i].length; j++){
                if(arr[i][j]!=arr[j][i]){
                    answer++;
                    break;
                }
            }
        }
        if(answer==0) return 1;
        else return 0;
    }
}