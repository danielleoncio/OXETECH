import java.util.ArrayList;
import java.util.Scanner;

public class Projeto3 {

    ArrayList<String> nomes = new ArrayList<>();
    ArrayList<String> codigos = new ArrayList<>();
    ArrayList<Integer> quantidadea = new ArrayList<>();
    ArrayList<Double> precos = new ArrayList<>();


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int menu = 0;
        //produto(nome,codigo, quant,preço)
    


        while (menu != 6) { 
            System.out.println("--------MENU-------");
            System.out.println("1-Cadastrar Produto");
            System.out.println("2-Remover Produto");
            System.out.println("3-Atualizar Produto");
            System.out.println("4-Exibir Produtos");
            System.out.println("5-Gerar Relatório de Estoque");
            System.out.println("6-SAIR");
            menu = scan.nextInt();

            switch (menu) {
                case 1:
                    cadastrarproduto();
                    break;
                case 2:
                    removerproduto();
                    break;
                case 3:
                    atualizarproduto();
                    break;
                case 4:
                    exibirprodutos();
                    break;
                case 5:
                    estoque();
                    break;
                default:
                    continue;
            }
            
            scan.close();
        }
    }

    public static void cadastrarproduto(){

    }
    public static void removerproduto(){

    }
    public static void atualizarproduto(){

    }
    public static void exibirprodutos(){

    }
    public static void estoque(){

    }
}
