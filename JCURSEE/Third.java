import java.util.Scanner; 

public class Third {
    public static void main(String[] args){
        String nome;
        int idade;
        double altura;

        Scanner read = new Scanner(System.in);

        nome = read.next();
        idade = read.nextInt();
        altura = read.nextDouble();

        System.out.println(nome);
        System.out.println(idade);
        System.out.printf("%.2f", altura);

    }
}
