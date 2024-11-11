import java.util.Scanner;

public class calculare {
    public static void main (String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Digite um número: ");
        double x = scan.nextDouble();

        System.out.println("Digite um número: ");
        double y = scan.nextDouble();

        scan.nextLine();

        System.out.println("Digite a operacao: ");
        char op = scan.nextLine().charAt(0);

        switch (op){
            case '+':
                System.out.printf("O resultado da operacao é : %.2f", (x + y));
                break;
            
            case '-':
                System.out.printf("O resultado da operacao é : %.2f", (x - y));
                break;

            case '*':
                System.out.printf("O resultado da operacao é : %.2f", (x * y));
                break;

            case '/':
                if(y != 0){
                   System.out.printf("O resultado da operacao é : %.2f", (x / y));
                } else {
                   System.out.printf("Nao é póssivel realizar divisao por ZERO.");
                }
                break;
            
            case '%':

                if(y != 0){
                    int a= (int)x;
                    int b= (int)y;
                   System.out.printf("O resultado da operacao é : %d", (a % b));
                } else {
                   System.out.printf("Nao é póssivel realizar divisao por ZERO.");
                }
                break;

            default:
                System.out.printf("Escolha uma operacao válida.");
                break;
        }
    scan.close();
    
    }
}
