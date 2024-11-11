
import java.util.Scanner;


public class CalcularIMC {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.printf("Digite seu peso: ");
        double peso = scan.nextDouble();
        
        System.out.printf("Digite sua altura: ");
        double altura = scan.nextDouble();

        System.out.printf("Digite seu nome: ");
        String nome = scan.nextLine();

        double IMC = peso/(altura*altura);

        String condicao;

        if (IMC >= 40) {
            condicao = "Obesidade muito severa";
        } else if(IMC >= 35){
            condicao = "Obesidade severa";
        }   else if(IMC >= 30){
            condicao = "Obesidade moderada";
        }   else if(IMC >= 25){
            condicao = "Pré-obesidade";
        }   else if(IMC >= 18.5){
            condicao = "Eutrofia";
        }   else if(IMC >= 17){
            condicao = "Magreza grau I";
        }   else if(IMC >= 16){
            condicao = "Magreza grau II";
        }   else{
            condicao = "Magreza grau III";
        }

        System.out.printf("%s, seu IMC é %.2f, %s" , nome, IMC, condicao);

    }
}
