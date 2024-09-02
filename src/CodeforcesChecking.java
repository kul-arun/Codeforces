// 1791A. Codeforces Checking

import java.util.Scanner;

public class CodeforcesChecking {
    public static void main(String[] args) {
        String str = "codeforces";
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            char tmp = scanner.next().charAt(0);
            System.out.println(str.indexOf(tmp) == -1 ? "NO" : "YES");
        }
    }
}
