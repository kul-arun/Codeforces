// 785A. Anton and Polyhedrons

import java.util.Scanner;

public class AntonAndPolyhedrons {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int facesCount = 0;
        while (n-- > 0) {
            facesCount += switch(scanner.next()) {
                case "Tetrahedron" -> 4;
                case "Cube" -> 6;
                case "Octahedron" -> 8;
                case "Dodecahedron" -> 12;
                default -> 20;
            };
        }
        System.out.println(facesCount);
    }
}
