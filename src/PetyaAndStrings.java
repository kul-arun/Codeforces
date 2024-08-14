// 112A. Petya and Strings.

import java.util.Scanner;

public class PetyaAndStrings {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str1 = scanner.next();
        String str2 = scanner.next();
        int comparisonResult = str1.compareToIgnoreCase(str2);
        if (comparisonResult < 0) {
            comparisonResult = -1;
        }
        if (comparisonResult > 0) {
            comparisonResult = 1;
        }
        System.out.println(comparisonResult);
    }
}
