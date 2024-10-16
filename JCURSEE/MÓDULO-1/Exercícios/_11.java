import java.util.Scanner;

public class _11 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        double metros = scan.nextDouble();
        double cent = cm(metros);
        System.out.printf("%.2f", cent);

    }

    public static double cm(double metros){
        return metros*100;
    }
}
