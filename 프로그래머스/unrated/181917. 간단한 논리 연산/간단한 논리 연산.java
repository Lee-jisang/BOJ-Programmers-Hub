class Solution {
    public boolean solution(boolean x1, boolean x2, boolean x3, boolean x4) {
        boolean a = true;
        boolean b = true;
        if(x1==x2 && x1==false) a = false;
        else a = true;
        
        if(x3==x4 && x3==false) b = false;
        else b = true;
        
        if(a==b && a==true) return true;
        else return false;
    
    }
}