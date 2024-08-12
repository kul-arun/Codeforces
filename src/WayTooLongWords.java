// 71A. Way Too Long Words

import java.util.Scanner;

public class WayTooLongWords {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        byte n = scanner.nextByte();
        while (n > 0) {
            String str = scanner.next();
            int len = str.length();
            if (len > 10)
                System.out.println(str.charAt(0) + "" + (len - 2) + str.charAt(len - 1));
            else
                System.out.println(str);
            --n;
        }
    }
}
