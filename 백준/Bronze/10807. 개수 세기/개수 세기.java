// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int arr[] = new int[N];
        for(int i=0; i<N; i++)
            arr[i] = in.nextInt();
            
        int v = in.nextInt();    
        int ct=0;
        for(int i=0; i<N; i++){
            if(arr[i]==v)
                ct++;
        }
        
        System.out.println(ct);
    }
}