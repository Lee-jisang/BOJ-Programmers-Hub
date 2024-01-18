class Solution {
    public int solution(int chicken) {
        //chicken=1999;
        int num_cupon = chicken; //쿠폰의 개수
        int service_chicken = 0;  //서비스 치킨의 수
        while(num_cupon>=10){
            service_chicken += num_cupon/10; 
            num_cupon = (num_cupon/10)+(num_cupon%10); //남은쿠폰과 서비스치킨시킬때 나오는 쿠폰의 합
            //System.out.println(num_cupon);
        }  
        return service_chicken;
    }
}
