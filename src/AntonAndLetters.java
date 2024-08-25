// 443A. Anton and Letters

import java.util.Scanner;
import java.util.HashSet;

public class AntonAndLetters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        HashSet<Character> set = new HashSet<>();
        String str = scanner.nextLine();
        for (int i=0; i<str.length(); ++i) {
            set.add(str.charAt(i));
        }
        int distinctCount = set.size() - 2;
        if (set.contains(',')) {
            distinctCount -= 2;
        }
        System.out.println(distinctCount);
    }
}
