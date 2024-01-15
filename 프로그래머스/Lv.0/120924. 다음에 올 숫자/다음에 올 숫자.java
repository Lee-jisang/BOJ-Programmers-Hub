import java.util.*;

class Solution {
    public int solution(int[] common) {
        int answer = 0;
        int n = common.length;
        //등차 확인
        if(common[1]-common[0] == common[2]-common[1]){
            int a = common[1]-common[0];
            return common[n-1]+a;
        }else{
            int b = common[1]/common[0];
            return common[n-1]*b;
        }
    }
}