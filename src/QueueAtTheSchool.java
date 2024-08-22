// 266B. Queue at the School

import java.util.Scanner;

public class QueueAtTheSchool {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t = scanner.nextInt();
        String s = scanner.next();
        int len = s.length();
        if (len < 2) {
            System.out.println(s);
            return;
        }
        char[] array = s.toCharArray();
        while (t > 0) {
            int i = len-1;
            int j = len-2;
            while (j > -1) {
                if (array[i] == 'G' && array[j] == 'B') {
                    char tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                    --i;
                    --j;
                }
                --i;
                --j;
            }
            --t;
        }
        System.out.println(String.valueOf(array));
    }
}
