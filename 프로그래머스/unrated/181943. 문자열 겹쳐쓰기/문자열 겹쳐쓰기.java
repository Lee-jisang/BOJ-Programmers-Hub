class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        String answer = my_string.substring(0,s)+overwrite_string+my_string.substring(s+overwrite_string.length()); 
        System.out.println(my_string.substring(0,s));
        System.out.println(my_string.substring(s,s+overwrite_string.length()));
        System.out.print(my_string.substring(s+overwrite_string.length()));
        return answer;
        
    }
}