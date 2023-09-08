class Solution {
    public int solution(String my_string, String is_suffix) {

        String st[] = new String[my_string.length()];
        for(int i=0; i<my_string.length(); i++){
            st[i]=my_string.substring(i);
        }
        int k=0;
        for(int i=0; i<my_string.length(); i++){
            if(is_suffix.equals(st[i])){
                k=1;
                return k;
            }else{
                k=5;
            }
        }
        if(k==5) {
            int p=0;
            return p;
        }
        return 0;
    }
}