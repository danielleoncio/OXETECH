import java.util.Scanner;

public class _12 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double x = scan.nextDouble();
        
        int y = (int) x;
        System.out.printf("%d", y);
        scan.close();
    }
}
