import java.util.Scanner;

public class Antom_and_Letters {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String temp = "";
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                if (temp.indexOf(s.charAt(i)) == - 1){
                    temp = temp + s.charAt(i);
                    count++;
              }
            }
        }
        System.out.println(count);
        sc.close();

    }
}