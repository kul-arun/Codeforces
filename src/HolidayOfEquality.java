// 758A. Holiday of Equality

import java.util.Scanner;

public class HolidayOfEquality {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int max = -1;
        for (int i=0; i<n; ++i) {
            a[i] = scanner.nextInt();
            if (a[i] > max) {
                max = a[i];
            }
        }
        int ans = 0;
        for (int i=0; i<n; ++i) {
            ans += (max - a[i]);
        }
        System.out.println(ans);
    }
}
