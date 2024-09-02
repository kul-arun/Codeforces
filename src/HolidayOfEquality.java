// 758A. Holiday of Equality

import java.util.Scanner;

public class HolidayOfEquality {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int max = -1, sum = 0;
        int n = scanner.nextInt();
        for (int i=0; i<n; ++i) {
            int tmp = scanner.nextInt();
            max = Math.max(tmp, max);
            sum += tmp;
        }
        System.out.println(max*n - sum);
    }
}
