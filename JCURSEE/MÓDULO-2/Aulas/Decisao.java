import java.util.Scanner;
public class Decisao {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.printf("Digite um número: ");
        int nivel = scan.nextInt();
        scan.close();
        if(nivel % 8 == 0){
            System.out.printf("O número %d é divisível por 8.\n" , nivel);
        }
        if(nivel % 8 != 0){
            System.out.printf("O número %d NÃO é divisível por 8.\n" , nivel);
        }
    }
}
