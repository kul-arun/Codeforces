// 1335A. Candies and Two Sisters

import java.util.Scanner;

public class CandiesAndTwoSisters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            System.out.println((n-1)/2);
        }
    }
}
