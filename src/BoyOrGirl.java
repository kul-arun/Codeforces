// 236A. Boy or Girl

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class BoyOrGirl {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String username = scanner.next();
        Set<Integer> set = new HashSet<>();
        username.chars().forEach(set::add);
        if (set.size() % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }
    }
}
