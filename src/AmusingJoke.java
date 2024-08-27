// 141A. Amusing Joke

import java.util.Scanner;

public class AmusingJoke {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String guestAndHost = scanner.next() + scanner.next();
        String letters = scanner.next();
        int[] array = new int[27];
        for (int i=0; i<letters.length(); ++i) {
            ++array[letters.charAt(i) % 32];
        }
        for (int i=0; i<guestAndHost.length(); ++i) {
            --array[guestAndHost.charAt(i) % 32];
        }
        boolean isPermutation = true;
        for (int i=0; i<array.length; ++i) {
            if (array[i] != 0) {
                isPermutation = false;
                break;
            }
        }
        System.out.println(isPermutation ? "YES" : "NO");
    }
}
