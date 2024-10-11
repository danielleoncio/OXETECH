#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Livros{
    int id;
    char titulo[100];
    char autor[100];
    int status; //0-disponível 1-indisponível

} Livros;

void adicionarLivro();
void listarLivros();
void buscarLivros();
void emprestarLivros();
void devolverLivros();
void carregarLivros();
void salvarDados();



int main(){

    Livros livros[100];
    int totalLivros = 0;

 carregarLivros();
  

  prinft("1 - \n");
  prinft("2 - \n");
  prinft("3 - \n");
  prinft("4 - \n");
  prinft("5 - \n");
  prinft("6 - \n");
  prinft("7 - \n");

 return 0;
}



void carregarLivros(Livros livros[], int *qtdLivros){
 
    FILE *file = fopen("livros.txt" , "r");

    if(file == NULL){
        printf("ERROR\n");
        exit(1);
    }

    while(fscanf(file , "%d" , &livros[*qtdLivros].id) != EOF){
       fgets(livros[*qtdLivros].titulo, 100 ,file);
       livros[*qtdLivros].titulo[strcspn(livros[*qtdLivros].titulo, "\n")] = '\0';
       *qtdLivros += 1;
    }
    fclose(file);  

}

void listarLivros()