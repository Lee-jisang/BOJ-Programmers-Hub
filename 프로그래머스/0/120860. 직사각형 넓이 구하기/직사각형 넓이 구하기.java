import java.util.*;

class Solution {
    public int solution(int[][] dots) {
        int h=0;
        int w=0;
        for(int i=0; i<dots.length-1; i++){
            for(int j=i+1; j<dots.length; j++){
                if(dots[i][0]==dots[j][0]){ //x좌표가 같은것
                    h = Math.abs(dots[i][1]-dots[j][1]);
                    break;
                }
                if(dots[i][1]==dots[j][1]){ //y좌표가 같은것
                    w = Math.abs(dots[i][0]-dots[j][0]);
                    break;
                }      
            }         
        }
        return h*w;
    }
}