class Solution {
    public int[] solution(int[] arr) {
        double a= arr.length;  
        int c = 1;
        while(a>2){
            a /= 2;
            c++;
        }
        int b[] = new int[(int)Math.pow(2,c)];
        if(arr.length==1){//2의 정수 거듭제곱,0도 정수임
            return arr;     
        }else if(arr.length<(int)Math.pow(2,c)){
            for(int i=0; i<b.length; i++){
                if(i<arr.length) b[i]=arr[i];
                else b[i]=0;
            }
            return b;
        }else{
            return arr; 
        }   
    }
}