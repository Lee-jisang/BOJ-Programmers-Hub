class Solution {
    public int solution(int a, int d, boolean[] included) {
        int sum = a;
        int sum1[] = new int[included.length];
        for(int i=0; i<included.length; i++){
            if(included[i]==true)
                sum1[i]=sum;
            
            sum +=d;              
        }
        int sum2=0;
        for(int i=0; i<sum1.length; i++)
            sum2 += sum1[i];
        return sum2;
    }
}