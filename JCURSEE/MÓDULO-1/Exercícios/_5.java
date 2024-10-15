import java.util.Scanner;

public class _5 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int a = scan.nextInt();
        int b = a;
        int c = a;
        c += 1;
        b -= 1;

        System.out.printf("%d\n%d\n%d\n%d",a, c, a, b);
        scan.close();
    }
}
