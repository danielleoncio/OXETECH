import java.util.Scanner;

public class whilee {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        while (true){
            int x = scan.nextInt();
            int y = scan.nextInt();
            if(x == y){
                System.out.printf("Encerrando programa.\n", x, y, y, (x/y), x);
                break;
            }
            else if(x % y == 0){
                System.out.printf("%d é múltiplo de %d, pois %d * %d = %d\n", x, y, y, (x/y), x);
            } else {
                System.out.printf("Não é multiplo\n");
            }
        }
    }
}
