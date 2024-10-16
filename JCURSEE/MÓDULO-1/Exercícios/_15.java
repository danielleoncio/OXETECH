import java.util.Scanner;
public class _15 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.println("Digite um valor para o lado do quadrado ou para o raio: ");
        double dado = scan.nextDouble();

        System.out.println("Digite 0 para calcular a área do quadrado ou qualquer outro número para área do circulo: ");
        int epi = scan.nextInt();

        double area = calcularArea(dado, epi);
        System.out.printf("%.2f", area);


        scan.close();
    }

    public static double calcularArea(double ladoraio , int  epi){
        double area = (epi == 0) ? (ladoraio*ladoraio) : (3.14 *ladoraio*ladoraio); 

        return area;
    }
}
