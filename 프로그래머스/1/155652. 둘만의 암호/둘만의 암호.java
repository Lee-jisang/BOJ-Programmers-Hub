class Solution {
    public String solution(String s, String skip, int index) {
        String answer = "";
        // s = "klmnopqrstuvwxyz";
        // skip = "abcdefghij";
        // index = 20;
        for(int i=0; i<s.length(); i++){
            char a = s.charAt(i); //문자
            for(int j=0; j<index; j++){      
                if(a == 'z') a = (char)('a'-1);
                if(skip.contains(Character.toString(++a))){
                    j--;
                    continue;
                }      
                //System.out.println(a);
                if(j==index-1){
                    answer += a;
                }
                if(a == 'z') a = (char)('a'-1);
            }          
        }       
        return answer;
    }
}
//입력값 〉 "bcdefghijklmnopqrstuvwxyz", "a", 1
// 기댓값 〉"cdefghijklmnopqrstuvwxyzb"

// 입력값 〉 "klmnopqrstuvwxyz", "abcdefghij", 20
// 기댓값 〉 "opqrstuvwxyzklmn"