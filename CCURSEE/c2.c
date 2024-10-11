#include <stdio.h>

int main(){

 int num[10], maior = 0, menor = 0;

   for(int i = 0; i < 10; i++){
    
    scanf("%d", &num[i]);
    if (num[i] > maior )
    {
        maior = num[i];
    }
    if(i == 0){
        menor = num[i];
    }
    else if(num[i] < menor){
        menor = num[i];
    }
    

   }
  printf("%d\n", maior);
  printf("%d\n", menor);

  return 0;
}