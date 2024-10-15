import  java.util.Scanner;

public class _9 {
    public static void main(String[] agrs){
        Scanner scan = new Scanner(System.in);

        int a = scan.nextInt();

        boolean crianca = (a < 16) ? (true) : (false);
        boolean teen = (a >= 16 && a <= 18) ? (true) : (false);
        boolean idoso = (a > 65) ? (true) : (false);
        
        System.out.println("É criança? " + crianca);
        System.out.println("É adolescente? " + teen);
        System.out.println("É idoso com mais de 65 anos? " + idoso);
        scan.close();
    }
}
