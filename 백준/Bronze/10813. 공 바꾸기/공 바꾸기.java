/* Online Java Compiler and Editor */
import java.util.Scanner;

public class Main {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();
        int arr[] = new int[N];
        for(int i=0; i<N; i++)
            arr[i] = i+1;
            
        int tmp=0;
        for(int i=0; i<M; i++){
            int a = in.nextInt();
            int b = in.nextInt();
            
            tmp = arr[a-1];
            arr[a-1] = arr[b-1];
            arr[b-1] = tmp;
        }
        for(int i=0; i<N; i++)
            System.out.print(arr[i]+" ");
    }
}