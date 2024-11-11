
import java.util.Scanner;

public class biblioteca {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.printf("Digite seu nome: ");
        String nome = scan.nextLine();

        System.out.printf("Quantos livros voce pegou? ");
        int livros = scan.nextInt();

        System.out.printf("Qual seu débito? ");
        double debito = scan.nextDouble();


        if(livros < 5 && debito < 10.0){
            System.out.println(nome + ", voce pode pegar mais livros!");
        }
        else{
            System.out.println(nome + ", voce não pode pegar mais livros!");
        }

    }
}
