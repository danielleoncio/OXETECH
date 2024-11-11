import java.util.Scanner;
    public class Projeto2 {
        public static void main(String[] args){
            Scanner scan = new Scanner(System.in);
        
        while(true){
            System.out.printf("-------- MENU -------\n");
            System.out.printf("0 - Encerrar o programa\n");
            System.out.printf("1 - Operar com números decimais\n");
            System.out.printf("2 - Operar com números inteiros\n");
            int x = scan.nextInt();

            if(x == 0){
                break;
            }
            else if (x == 1) {
                while(true){
                    System.out.printf("-------- Opções -------\n");
                    System.out.printf("0 - Voltar ao menu\n");
                    System.out.printf("1 - Fazer uma operação\n");
                    int x1 = scan.nextInt();
                    if(x1 == 0){
                        break;
                    }
                    else if(x1 == 1){
                        System.out.printf("-------- OPERCAÇÕES -------\n");
                        System.out.printf("Adição(+) \n");
                        System.out.printf("Subtração(-)\n");
                        System.out.printf("Multiplicação(*)\n");
                        System.out.printf("Divisão(/)\n");
                        System.out.printf("Resto(%)\n");
                        System.out.printf("Digite um valor: \n");

                        double num1 = scan.nextDouble();
                        System.out.printf("Digite outro valor: \n");
                        double num2 = scan.nextDouble();
                        System.out.printf("Digite a operação: \n");
                        char op = scan.nextLine().charAt(0);
                        if (op == '+') {
                        }
                        else if(op == '-'){
                        }
                        else if(op == '*'){
                        }
                        else if(op == '/'){
                            if(num2 == 0){
                            System.out.printf("Digite a operação: \n");
                            }
                        }
                        else if(op == '%'){
                        }
                        else{

                            continue;
                        }
                    }
                    else{
                        continue;
                    }
                }
            }
            else if (x == 2) {
            
            }

        


        } 
        scan.close();
    }

        public static int menu(Scanner scan){
            System.out.printf("-------- MENU -------\n");
            System.out.printf("0 - Encerrar o programa\n");
            System.out.printf("1 - Operar com números decimais\n");
            System.out.printf("2 - Operar com números inteiros\n");
            int x = scan.nextInt();
            return x;
        }

        public static void opcoes(Scanner scan){
            System.out.printf("-------- Opções -------\n");
            System.out.printf("0 - Voltar ao menu\n");
            System.out.printf("1 - Fazer uma operação\n");
            int x = scan.nextInt();
            return x;
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