class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        String A = a+"";
        String B = b+"";
        int c = Integer.parseInt(A+B);
        int d = 2*a*b;
        if(c>=d) return c;
        else return d;
 
    }
}