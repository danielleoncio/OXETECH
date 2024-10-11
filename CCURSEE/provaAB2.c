#include <stdio.h>

void detras(int array[], int N){
    if(N == -1){
        return;
    }
    printf("%d ", array[N]);
    detras(array, N-1);
}



int qntban(int array[], int z, int i, int id, int c){
    if(i == z){
        return c;
    }
   if(array[i] == id){
    c++;
   }
   return qntban(array, z, ++i, id, c);
}


void ler(int array[], int z, int i){
    if(i == z){
        return;
    }
    scanf("%d", &array[i]);
    getchar();

   return ler(array, z, ++i);
}


int main(){
    int N, a, l, v;
    scanf("%d", &N);

    int caminho[N]; 
    ler(caminho, N, 0);
    a = qntban(caminho, N, 0, 3, 0);
    l = qntban(caminho, N, 0, 2, 0);
    v = qntban(caminho, N, 0, 1, 0);
    
    printf("Amarelo = %d\n", a);
    printf("Laranja = %d\n", l);
    printf("Vermelho = %d\n", v);
    detras(caminho, N-1);

    return 0;
}


