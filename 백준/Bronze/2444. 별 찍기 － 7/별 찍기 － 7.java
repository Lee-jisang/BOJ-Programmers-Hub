
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.close();
        int p = n;
        for(int i=1; i<=n; i++){
            for(int j=p-1; j>0; j--){
                System.out.print(" ");
            }
            for(int j=0; j<2*i-1; j++){
                System.out.print("*");
            }
            p--;
            System.out.println();
        }
        p=1;
        for(int i=n-1; i>=1; i--){
            for(int j=0; j<p; j++){
                System.out.print(" ");
            }
            for(int j=0; j<2*i-1; j++){
                System.out.print("*");
            }
            p++;
            System.out.println();
        }
    }
}