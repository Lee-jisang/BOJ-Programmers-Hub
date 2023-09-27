class Solution {
    public int solution(int num, int k) {
        String n = num+"";
        for(int i=0; i<n.length(); i++){
            if(n.charAt(i)==(k+'0'))
                return i+1;
        }
        return -1;
    }
}