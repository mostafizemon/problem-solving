import java.util.Scanner;

public class Insomnia_cure {

    
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int l = sc.nextInt();
    int m = sc.nextInt();
    int n= sc.nextInt();
    int d= sc.nextInt();
    sc.close();

    if(k==1||l==1||m==1||n==1){
        System.out.println(d);
    }
    else{
        int count=0;
       for(int i=1;i<=d;i++){
           if(i%k==0||i%l==0||i%m==0||i%n==0){
               count++;
           }
        
    }
    System.out.println(count);

}
}
}