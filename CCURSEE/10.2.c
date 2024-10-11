#include <stdio.h>


 void ler(int i, int m, int array[]){
   if(i < m){
     scanf("%d", &array[i]);

     if(array[i] % 2 == 0){
       array[i] = -1;
     }
     printf("%d\n", array[i]);
     ler(i + 1, m, array);
   }
 }

 int main(){
   int num[10];
   
   ler(0,10,num);
  

 return 0;
}