import java.util.Scanner;

public class Dubstep {
    public static String SongDecoder (String song) {
        return song.replaceAll("(WUB)+", " ").trim();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String song = sc.nextLine();
        System.out.println(SongDecoder(song));
    }

    
}

