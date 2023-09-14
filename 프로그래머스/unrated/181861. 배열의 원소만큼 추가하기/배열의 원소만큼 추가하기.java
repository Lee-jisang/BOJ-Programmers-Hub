class Solution {
    public int[] solution(int[] arr) {
        int sum=0;
        for(int i: arr)
            sum += i;      
        int[] answer = new int[sum];
        
        int k=0;
        for(int i=0; i<arr.length; i++){
            for(int j=1; j<=arr[i]; j++){
                answer[k++]=arr[i];
            }
        }
        return answer;
    }
}