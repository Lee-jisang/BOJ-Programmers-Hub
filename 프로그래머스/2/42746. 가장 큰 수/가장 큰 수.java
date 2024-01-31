import java.util.Arrays;

public class Solution {
    public String solution(int[] numbers) {
        String[] arr = new String[numbers.length];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = String.valueOf(numbers[i]); //=numbers[i]+""
        }
        
        // 두 수를 합친 값이 큰 순서대로 (내림차순)
        // o1 : 10, o2 : 2 이면 102과 210 중 뭐가 더 큰지 비교
        // 순서만 바꾸면 작은 숫자로 만들 수 있음
        Arrays.sort(arr, (o1, o2) -> (o2 + o1).compareTo(o1 + o2));
        
        if (arr[0].equals("0")) {
           return "0";
        }

        StringBuilder answer = new StringBuilder();
        for (int i = 0; i < arr.length; i++) {
            answer.append(arr[i]);
        }
        return answer.toString();
    }
}