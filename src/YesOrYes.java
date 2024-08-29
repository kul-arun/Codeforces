// 1703A. YES or YES

import java.util.Scanner;

public class YesOrYes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            String str = scanner.next();
            System.out.println(str.toLowerCase().equals("yes") ? "yes" : "no"); 
        }
    }
}
