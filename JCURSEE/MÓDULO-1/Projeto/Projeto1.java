import java.util.Scanner;
    public class Projeto1 {
        public static void main(String[] args){
            Scanner scan = new Scanner(System.in);

            System.out.println("Digite seu nome: ");
            String nome = scan.nextLine();

            System.out.println("Olá " + nome + ", digite um número : ");
            double x = scan.nextDouble();

            System.out.println("Digite outro número : ");
            double y = scan.nextDouble();
            
            System.out.printf("Calculando com valores decimais : \n");
            System.out.printf(" Resultado da operação : %.2f + %.2f = %.2f\n", x, y, somar(x, y));
            System.out.printf(" Resultado da operação : %.2f - %.2f = %.2f\n", x, y, subtrair(x, y));
            System.out.printf(" Resultado da operação : %.2f * %.2f = %.2f\n", x, y, times(x, y));
            System.out.printf(" Resultado da operação : %.2f / %.2f = %.2f\n", x, y, divide(x, y));

           int xi = (int)x;
           int yi = (int)y;

             System.out.println("");

            System.out.printf("Calculando com valores inteiros : \n");
            System.out.printf(" Resultado da operação : %d + %d = %d\n", xi, yi, somari(xi, yi));
            System.out.printf(" Resultado da operação : %d - %d = %d\n", xi, yi, subtrairi(xi, yi));
            System.out.printf(" Resultado da operação : %d * %d = %d\n", xi, yi, timesi(xi, yi));
            System.out.printf(" Resultado da operação : %d / %d = %d\n", xi, yi, dividei(xi, yi));

            scan.close();


        }

        public static double somar(double x, double y){
            return (x + y);
        }

        public static double subtrair(double x, double y){
            return (x - y);
        }

        public static double times(double x, double y){
            return (x*y);
        }

        public static double divide(double x, double y){
            return (y == 0) ? (-1.0) : (x/y);
    
        }



        public static int  somari(int  x, int y){
            return (x + y);
        }

        public static int  subtrairi(int  x, int y){
            return (x - y);
        }

        public static int  timesi(int  x, int y){
            return (x * y);
        }

        public static int  dividei(int  x, int y){


            return (y == 0) ? (-1) : (x/y);
        }
    }