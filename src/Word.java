// 59A. Word

import java.util.Scanner;

public class Word {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.next();
        int wordLength = word.length();
        int lowerCaseCount = 0;
        for (int i=0; i<wordLength; ++i) {
            if (word.charAt(i) > 96) {
                ++lowerCaseCount;
            }
        }
        int upperCaseCount = wordLength - lowerCaseCount;
        if (upperCaseCount > lowerCaseCount) {
            System.out.print(word.toUpperCase());
        } else {
            System.out.print(word.toLowerCase());
        }
    }
}
            
