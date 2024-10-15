import java.util.Scanner;

public class _4 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();

        String maior = (a % 2 == 0) ?  "É par" : "Não é par";

        System.out.printf("%s" , maior);
        scan.close();

    }
}
