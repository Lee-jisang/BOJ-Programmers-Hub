import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int k = N / 4;
        for(int i=0; i<k; i++){
            System.out.print("long ");
        }
        System.out.print("int");
        
    }
}