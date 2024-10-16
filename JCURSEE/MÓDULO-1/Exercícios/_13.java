import java.util.Scanner;
public class _13 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        double x = scan.nextDouble();

        int a = (int) x;

        System.out.printf("%d\n", a);
        System.out.printf("%.2f\n", x);
        System.out.printf("%d + %.2f = %.2f\n", a, x,(a + x));
        scan.close();
    }
}
