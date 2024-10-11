#include <stdio.h>
int ehpar(int x){
    if(x % 2 == 0){
        return 1;
    }
  return 0;
}

int main(){
    int notas[10][2];

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &notas[i][j]);
        }
    }

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 2; j++){
             printf("%d ", notas[i][j]);
            if( j == 1){
                printf("\n");
            }
        }
    }


    return 0;
}