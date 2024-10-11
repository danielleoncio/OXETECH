#include <stdio.h>


int mdc(int x, int y){
    if (x % y == 0){
        return y;
    }
        return mdc(y, x % y);
}


int inversomod(int a, int m, int k){ // k start 0;
    if((a*k) % m == 1 && mdc(k,m) == 1 && k<m){
        return k;
    }
    else if(k < m){
        return inversomod(a, m , ++k);
    }
    else if(k == m){
        return 0;
    }
  return 0;
}


int cond(int a, int b){
    if (a < b){
        return 1;
    }

    else{
        return 0;
    }
}


void ler(int array1[], int array2[], int x, int z){
   if (x == z){
    return ;
   }
   printf("Valores de a%d e m%d: ",x, x );
   scanf("%d %d", &array1[x], &array2[x]);

   ler(array1,array2,++x, z);
}

int ehcoprimoextend(int x[], int n, int i, int j){//(1) n = z; j=1
    if (i == n-2 && j == n) {
        return 1;
    }
    if(j == n){
        return ehcoprimoextend(x, n, ++i, 0);
    }
    if(i == j){
        return ehcoprimoextend(x, n, i, ++j);
    }
    if (mdc(x[i], x[j]) == 1){
        return ehcoprimoextend(x, n, i, ++j);
    }
    
    
  return 0;
}


int calcularN(int array1[], int z, int i){
   if(i == z){
    return 1;
   }
   
   return array1[i] * calcularN(array1, z, ++i);
}


void calcularNi(int coe2[], int Ni[], int z, int i, int N){
    if(i == z){
        return;
    }
    Ni[i] = (N/coe2[i]);
    calcularNi(coe2, Ni, z, ++i, N); 
}

void inversoN1(int coe2[], int Ni[], int iNi[], int z, int i){
    if(i == z){
        return;
    }
    iNi[i] = inversomod(Ni[i], coe2[i], 0);
    //printf("%d ", iNi[i]);
    inversoN1(coe2, Ni, iNi, z, ++i);
}


int calcularxgeral(int coe1[], int Ni[], int iNi[], int z, int i){
    if (i == z){
        return 0;
    }
    return (coe1[i] * Ni[i] * iNi[i]) + (calcularxgeral(coe1, Ni, iNi, z, ++i));

}

/*void printar(int array1[], int array2[], int x, int z){
    if(x == z){
        return ;
    }
    printf("%d %d \n",array1[x], array2[x]);

    printar(array1, array2, ++x, z);
}*/

int verificar(int coe1[], int coe2[], int z, int i){
    if (i == z){
        return 1;
    }
    if (coe1[i] < coe2[i]){
      return  verificar(coe1, coe2, z, ++i);
    }
    
   return 0;
}



int main(){
   int z, xgeral, xred, N;
    printf("\n");
    printf("SEGUE A FORMA: x congruente a (mod m)\n");
    printf("De o numero de conguencias: ");
    scanf("%d" ,&z);

   int coe1[z];
   int coe2[z];
   int Ni[z];
   int iNi[z];

   ler(coe1, coe2, 0, z);
   
   if( ehcoprimoextend(coe2, z, 0, 1) == 1 && verificar(coe1, coe2 , z, 0) == 1){
     N = calcularN(coe2, z, 0);

    //printf("%d\n", N);
     calcularNi(coe2, Ni, z, 0, N);
     inversoN1(coe2, Ni, iNi, z, 0);
     xgeral = calcularxgeral(coe1, Ni, iNi, z, 0);
     xred = xgeral % N;

     printf("SOLUCAO REDUZIDA: x = %d\n", xred);
     printf("SOLUCAO GERAL   : x = %d*k + %d\n", N, xred);
     
     
   }

   else {
     printf("Valores INVALIDOS ou o sistema sem solucao.");
   }
   
  return 0;
}