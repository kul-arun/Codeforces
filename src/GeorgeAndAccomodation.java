// 467A. George and Accomodation

import java.util.Scanner;

public class GeorgeAndAccomodation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        byte n = scanner.nextByte();
        byte count = 0;
        while (n > 0) {
            byte p = scanner.nextByte();
            byte q = scanner.nextByte();
            count += (q - p > 1 ? 1 : 0);
            --n;
        }
        System.out.println(count);
    }
}
