/* Online Java Compiler and Editor */
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String [] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = new int[30];
        for(int i=0; i<28; i++){
            int n = in.nextInt();
            arr[n-1]++; 
        }
        for(int i=0; i<arr.length; i++){
            if(arr[i]==0) //출석 안한 사람
                System.out.println(i+1+" ");
        }
    }
}