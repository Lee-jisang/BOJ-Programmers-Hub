import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int groupnum = 0;

        for (int i = 0; i < N; i++) {
            String s = scanner.next();
            int cnt = 0;
            for (int j = 0; j < s.length() - 1; j++) {
                for (int k = j + 1; k < s.length(); k++) {
                    if(k+1==s.length()) continue;
                    if (s.charAt(j) != s.charAt(k) && s.charAt(j) == s.charAt(k + 1)) {
                        cnt++;
                    }
                }
            }
            if (cnt == 0) {
                groupnum++;
            }
        }

        System.out.println(groupnum); // cnt=0이면 그룹단어, cnt>0이면 그룹단어아님
    }
}