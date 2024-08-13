// 263A. Beautiful Matrix

import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = -1;
        for (int i=0; i<25; ++i) {
            x = scanner.nextByte();
            if (x == 1) {
                int row = i / 5;
                int col = i % 5;
                System.out.println(Math.abs(row-2) + Math.abs(col-2));
                return;
            }
        }
    }
}
