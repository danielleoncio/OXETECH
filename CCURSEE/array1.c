#include <stdio.h>

int main(){
   int notas[4] = {0};

        for(int i = 0; i < 4; i++){
            scanf("%d", &notas[i]);
        }
    
   printf("\n");
   printf("suas notas sao: ");

        for(int i = 0; i < 4; i++){
            printf("%d ", notas[i]);
        }


    return 0;
}