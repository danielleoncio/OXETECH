#include <stdio.h>

int main(){

 int num[10], soma = 0;

   for(int i = 0; i < 10; i++){
    
    scanf("%d", &num[i]);
    soma += num[i]; 
    printf("%d\n" , num[i]);

   }
  printf("%d\n", soma);

  return 0;
}