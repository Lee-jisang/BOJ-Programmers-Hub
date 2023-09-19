class Solution {
    public int solution(int[] array) {
        int cnt=0;
        for(int i=0; i<array.length; i++){
            for(int j=0; j<(array[i]+"").length(); j++){
                if((array[i]+"").charAt(j)=='7') cnt++;
            }
        }
        return cnt;
    }
}