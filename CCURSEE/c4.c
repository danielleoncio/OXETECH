#include <stdio.h>

int main(){
  char c;
  int a, b;
  int *pa = &a, *pb = &b;
  
  printf("Voce deseja INICIAR?\n S para sim // N para nao : ");
  scanf(" %c", &c);

  while (c != 'N'){
    printf("Digite dois numeros a fim de comparacao: ");
    scanf("%d %d", &a, &b);
    
    if (*pa > *pb)
    {
        printf("O numero %d eh maior que o numero %d\n",*pa, *pb );
    }
    else if (*pb > *pa)
    {
        printf("O numero %d eh maior que o numero %d\n",*pb, *pa );
    }
    else if (*pb == *pa)
    {
        printf("Os numero %d e %d sao iguais\n",*pb, *pa);
    }

      printf("Voce deseja CONTINUAR?\n S para sim // N para nao : ");
      scanf(" %c", &c);
   
  }
  

  





    return 0;
}