package OXETECH.JCURSEE.Aulas;
import java.util.Scanner;

public  class  CalcularIMC {
    public static void main(String[] agrs){

        double peso, altura;
        String nome;


        Scanner ler = new Scanner(System.in);
        
        System.out.println("Digite seu peso: ");
        peso = ler.nextDouble();

        System.out.println("Digite sua altura: ");
        altura = ler.nextDouble();

        ler.nextLine();

        System.out.println("Digite seu nome: ");
        nome = ler.nextLine();
        
        ler.close();


    }
}