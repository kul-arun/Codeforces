// 996A. Hit the Lottery

import java.util.Scanner;

public class HitTheLottery {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = 0;
        int[] denominations = {100, 20, 10, 5, 1};
        for (int i=0; i<denominations.length; ++i) {
            count += n/denominations[i];
            n = n % denominations[i];
        }
        System.out.println(count);
    }
}
