public class Hit_the_Lottery {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int n = sc.nextInt();
        int[] notes = {100, 20, 10, 5, 1};
        int count = 0;
        for (int i = 0; i < notes.length; i++) {
            count += n / notes[i];
            n %= notes[i];
        }
        System.out.println(count);
        sc.close();
    }
    
}
