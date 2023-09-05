class Solution {
    public int solution(int a, int b) {
       
        String A = a+"";
        String B = b+"";

        int aa = Integer.parseInt(A+B);
        int bb = Integer.parseInt(B+A);
        if(aa>=bb)
            return aa;
        else
            return bb;      
    }
}