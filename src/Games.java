// 268A. Games

import java.util.Scanner;

public class Games {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        byte n = scanner.nextByte();
        byte[] home = new byte[101];
        byte[] guest = new byte[101];
        for (byte i=0; i<n; ++i) {
            ++home[scanner.nextByte()];
            ++guest[scanner.nextByte()];
        }
        int count = 0;
        for (byte i=1; i<101; ++i) {
            count += home[i] * guest[i];
        }
        System.out.println(count);
    }
}
