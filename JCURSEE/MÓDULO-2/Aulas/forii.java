import java.util.Scanner;

public class forii {
    public static void main(String[] args) {
     Scanner scan = new Scanner(System.in); 

     System.out.printf("Digite o número de repeticoes: ");
     
     int N = scan.nextInt();
     System.out.printf("\n");

     int total = 0;

     for (int i = 0; i < N ; i++){
        System.out.printf("Digite um numero : ");
        int num = scan.nextInt();
        System.out.printf("\n");

        if(num % 2 == 0){
            total += 3; 
        } else {
            total -= 5; 
        }
    }
    System.out.printf("Total : %d" , total);
 }
    
}
