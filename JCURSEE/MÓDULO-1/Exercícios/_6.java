import java.util.Scanner;

public class _6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        double a = scan.nextDouble();
        double b = scan.nextDouble();
        double c = scan.nextDouble();

        double m = (a + b + c)/3;
        boolean p = (m > 50.0) ? (true) : (false);
        System.out.printf("%.2f\n" , m);
        System.out.println("A média é maior que 50? " + p);

        scan.close();

    }
    
}
