// 510A. Fox And Snake

import java.util.Scanner;

public class FoxAndSnake {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        for (int i=1; i<=n; ++i) {
            if (i%2 == 1) {
                System.out.println("#".repeat(m));
            } else {
                if (i%4 == 0) {
                    System.out.println("#" + ".".repeat(m-1));
                } else {
                    System.out.println(".".repeat(m-1) + "#");
                }
            }
        }
    }
}
