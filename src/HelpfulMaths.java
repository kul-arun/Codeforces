// 339A. Helpful Maths

import java.util.Scanner;
import java.util.Arrays;

public class HelpfulMaths {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        var array = str.split("\\+");
        Arrays.sort(array);
        String result = String.join("+", array);
        System.out.println(result);
    }
}
