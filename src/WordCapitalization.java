// 281A. Word Capitalization

import java.util.Scanner;

public class WordCapitalization {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        char c = str.charAt(0);
        if (c < 97) {
            System.out.print(c);
        } else {
            System.out.print((char)(c - 32));
        }           
        System.out.println(str.substring(1));
        scanner.close();
    }
}
