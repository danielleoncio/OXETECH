#include <stdio.h>
#include <string.h>

int main(){
    int aux = 0;
    char nome[100];

    fgets(nome,100,stdin);
    nome[strcspn(nome, "\n")] = '\0'; 
 
    for (int i = 0; nome[i] != '\0'; i++){
         aux++;
    }

    printf("%c\n", nome[6]);

    char a = 'a';

 printf("%d", aux);

 return 0;
}