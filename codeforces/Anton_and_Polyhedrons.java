public class Anton_and_Polyhedrons {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            if (s.equals("Tetrahedron")) {
                sum += 4;
            } else if (s.equals("Cube")) {
                sum += 6;
            } else if (s.equals("Octahedron")) {
                sum += 8;
            } else if (s.equals("Dodecahedron")) {
                sum += 12;
            } else if (s.equals("Icosahedron")) {
                sum += 20;
            }
        }
        System.out.println(sum);
        sc.close();
    }
}
