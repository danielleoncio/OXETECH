#include <stdio.h>



int main(){

    //char palavras[100];
    int num[5];
    int j = 0;

    while( j < 5){
     scanf("%d", &num[j]);
     j++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
    


 return 0;
}