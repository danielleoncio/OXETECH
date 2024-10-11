#include <stdio.h>

int main(){
  int valores[5] = {0};
  int soma = 0;
  int *p = valores;


  for (int i = 0; i < 5; i++){
      scanf("%d", &valores[i]);
  }

  for (int i = 0; i < 5; i++){
      soma += *(p + i);
  }
   
  printf("%d\n", soma);

 return 0;
}