// 520A. Pangram

import java.util.Scanner;

public class Pangram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next();
        int[] array = new int[26];
        for (int i=0; i<s.length(); ++i) {
            array[s.charAt(i) % 32 - 1] = 1;
        }
        int count = 0;
        for (int item : array) {
            count += item;
        }
        System.out.println(count == 26 ? "YES" : "NO");
    }
}
