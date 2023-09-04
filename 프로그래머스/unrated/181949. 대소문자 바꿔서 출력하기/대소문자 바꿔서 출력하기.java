import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        for(int i=0; i<a.length(); i++){
            if('a'<=a.charAt(i)&&a.charAt(i)<='z')
              System.out.print((a.charAt(i)+"").toUpperCase());
            else
              System.out.print((char)(a.charAt(i)+32));  
        }
      
    }
}