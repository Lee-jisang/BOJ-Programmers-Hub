class Solution {
    public String solution(String my_string) {
        String moem[] = {"a", "e", "i", "o", "u"};
        for(int i=0; i<moem.length; i++){
            my_string = my_string.replaceAll(moem[i],"");
        }
        return my_string;
    }
}