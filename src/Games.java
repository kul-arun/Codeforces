// 268A. Games

import java.util.Scanner;

public class Games {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        byte n = scanner.nextByte();
        byte[] home = new byte[n];
        byte[] guest = new byte[n];
        for (byte i=0; i<n; ++i) {
            home[i] = scanner.nextByte();
            guest[i] = scanner.nextByte();
        }
        int count = 0;
        for (byte i=0; i<n; ++i) {
            for (byte j=0; j<n; ++j) {
                if (home[i] == guest[j]) {
                    ++count;
                }
            }
        }
        System.out.println(count);
    }
}
