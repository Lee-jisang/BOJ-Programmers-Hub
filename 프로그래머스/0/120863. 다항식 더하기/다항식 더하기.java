class Solution {
    public String solution(String polynomial) {
        String x = "";
        int n = 0;
        int xn = 0;
        //polynomial = "x + 1"; //반례
        String a[] = polynomial.split(" ");
        
        for(int i=0; i<a.length; i++){
            if(a[i].equals("+")) continue;
            if(a[i].contains("x")){
                if(a[i].equals("x"))
                    xn++;
                else
                    xn += Integer.parseInt(a[i].substring(0,a[i].length()-1));                 
            }else 
                n += Integer.parseInt(a[i]);     
        }
        if(xn==1) x = "x";
        else if(xn==0) x = "";
        else x = xn+""+"x";

        if(n==0 && x.equals("")) return "";
        else if(n==0) return x;
        else if(x.equals("")) return n+"";
        else return x+" + "+(n+"");
    }
}