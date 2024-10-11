#include <stdio.h>


int ahiguais(int array[][3], int z, int i, int j){
    if(i == z){
        return 0;
    }
    if(i == j && j == z -1){
        return 0;
    }
    if(j = z){
        i++;
        j = 0;
        return ahiguais(array, z, i, j );
    }
    if (i != j && j != z){
        if(array[i][2] == array[j][2]){
            return 1;
        }

    }
    return ahiguais(array, z, i, ++j);

}


int qntban(int array[][3], int z, int i, int id, int c){
    if(i == z){
        return c;
    }
   if(array[i][2] == id){
    c++;
   }
   return qntban(array, z, ++i, id, c);
}

int bigger(int array[][3], int z, int i, int maior){
    if(i == z){
        return maior;
    }
    if(i == 0){
        maior = array[i][2];
    }
    else if(array[i][2] > maior){
        maior = array[i][2];
   }
   return bigger(array, z, ++i, maior);
}


void quemganhou(int array2[][3]){
    int maior = bigger(array2, 4, 0, 0);
    int emp = qntban(array2, 4, 0, maior, 0);
    if(emp > 1){
        printf("Houve um empate!");
    }
    else if(ahiguais(array2, 4, 0, 1) == 1){
        printf("Houve um empate!");
    }
    else{
        if(array2[0][2] == maior){
            printf("Tenorio venceu!");
        }
        else if(array2[1][2] == maior){
            printf("Davi venceu!");
        }
        else if(array2[2][2] == maior){
            printf("Vitor venceu!");
        }
        else if(array2[3][2] == maior){
            printf("Humberto venceu!");
        }
    
    }
}



void ler(int array[], int z, int i){
    if(i == z){
        return;
    }
    scanf("%d", &array[i]);
   // getchar();

   return ler(array, z, ++i);
}

void lerbi(int array[][3], int z, int i){
    if(i == z){
        return;
    }
    scanf("%d", &array[i][0]);
    //getchar();

   return lerbi(array, z, ++i);
}

void pontos(int array[], int array2[][3], int z, int i){
    if(i == z){
        return;
    }

    if(array[array2[i][1]] == 1){
         array2[i][2] += 10;
    }   if(array[array2[i][1]] == 2){
             array2[i][2] += 15;
        }   if(array[array2[i][1]] == 5){
                 array2[i][2] -= 5;
            }   if(array[array2[i][1]] == 7){
                     array2[i][2] += array2[i][0];
                }   if(array[array2[i][1]] == 9){
                         array2[i][2] -= 20;
                    }   if(array2[i][2] < 0){
                             array2[i][2] = 0;
                        }

    pontos(array, array2, z, ++i);

}


void posicao(int array2[][3], int z, int i, int g){
    if(i == z){
        return;
    }
    array2[i][1] += array2[i][0];
    if(array2[i][1] >= g){
        int q = (g-1) ;
        array2[i][1] =  array2[i][1] - q;
    }
    posicao(array2, z, ++i, g);
}


void rodadas(int array[], int array2[][3],int z, int j, int i){
    if(i == j){
        return;
    }
    lerbi(array2, 4, 0);
    posicao(array2, 4, 0, z);
    pontos(array, array2, 4, 0);
    rodadas(array, array2, z, j, ++i);
}

void iniciarzero(int array2[][3], int z, int i){
    if(i == z){
        return;
    }
    array2[i][1] = 0;

    iniciarzero(array2, z, ++i);
}

void iniciarzero2(int array2[][3], int z, int i){
    if(i == z){
        return;
    }
    array2[i][2] = 0;

    iniciarzero2(array2, z, ++i);
}


int main(){
    int z, j;
    scanf("%d", &z);
    
    
    int jogadores[4][3];
    iniciarzero(jogadores, 4, 0);
    iniciarzero2(jogadores, 4, 0);

    int casas[z]; 
    ler(casas, z, 0);

    scanf("%d", &j);
    
    rodadas(casas, jogadores, z, j, 0);
    quemganhou(jogadores);


    return 0;
}


