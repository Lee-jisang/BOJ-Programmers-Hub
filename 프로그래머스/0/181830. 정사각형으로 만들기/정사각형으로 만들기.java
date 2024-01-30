class Solution {
    public int[][] solution(int[][] arr) {
        int w=arr.length;//행
        int h=arr[0].length;//열
        if(h>w) w=h;
        else h=w;
        int[][] answer = new int[h][h];
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr[0].length; j++){
                answer[i][j]=arr[i][j];
            }
        }       
        return answer;
    }
}