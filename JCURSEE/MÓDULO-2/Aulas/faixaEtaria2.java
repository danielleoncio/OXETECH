import java.util.Scanner;
public class faixaEtaria2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int idade = scan.nextInt();

        if(idade >= 65){
            System.out.println("Voce é um idoso.");
        } else if(idade >= 18){
            System.out.println("Voce é um adulto.");
        } else if(idade >= 13){
            System.out.println("Voce é um adolescente.");
        } else{
            System.out.println("Voce é uma criança.");
        }
    }    
}
