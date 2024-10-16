import java.util.Scanner;

public class _10 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        double c = a + b;
        System.out.printf("Soma é %.2f" , c);
        scan.close();
        
    }
}
