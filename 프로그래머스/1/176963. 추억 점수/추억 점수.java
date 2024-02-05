import java.util.*;
class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {
        int[] answer = new int[photo.length];
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        Integer a[] = Arrays.stream(yearning).boxed().toArray(Integer[]::new);
        for(int i=0; i<name.length; i++){
            map.put(name[i], a[i]);
        }
        int sum = 0;
        for(int i=0; i<photo.length; i++){
            sum=0;
            for(int j=0; j<photo[i].length; j++){
                if(map.get(photo[i][j]) == null) continue;
                //System.out.println(map.get(photo[i][j]));
                sum += (map.get(photo[i][j])).intValue();
            }
            //System.out.println(sum);
            answer[i] = sum;
        }         
        return answer;
    }
}