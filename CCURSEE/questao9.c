#include <stdio.h>


int mdc(int x, int y){
    if (x % y == 0){
        return y;
    }
  return mdc(y, x % y);
}


int inverso(int a, int m, int k)
{
    if((a*k)%m==1 && mdc(k,m)==1 && k<m){
        return k;
    }
    else if(k < m){
        return inverso(a, m , ++k);
    }
    else if(k == m){
        return 0;
    }
  return 0;
}


int cond(int a, int b)
{
    if (a < b)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}


int calcongruente(double modone,double modtwo, double modthree, double rone, double rtwo, double rthree)
{
    int x, y;
    int N = modone * modtwo * modthree;
    double N1 = modtwo * modthree;
    double N2 = modone * modthree;
    double N3 = modone * modtwo;
    
    x = (N1 * inverso(N1, modone, 0) * rone) + (N2 * inverso(N2, modtwo, 0) * rtwo) + (N3 * inverso(N3, modthree, 0) * rthree);
    y = x % N;
    return y;
}



void congruencia(){ 

    double rone, modone;
    double rtwo, modtwo;
    double rthree, modthree;

    printf("\nMonte seu sistema de 3 congruencias na forma ===> x congruente 'a' (mod 'm')  \n\n");
    
    printf("Valores da 1a congruencia  a1 e m1 : ");
    scanf("%lf %lf", &rone, &modone);

    printf("Valores da 2a congruencia  a2 e m2 : ");
    scanf("%lf %lf", &rtwo, &modtwo);

    printf("Valores da 3a congruencia  a3 e m3 : ");
    scanf("%lf %lf", &rthree, &modthree);
    
    if ((mdc(modone, modtwo) != 1 || mdc(modtwo, modthree)!= 1 || mdc(modthree, modone) != 1) || (cond(rone, modone) != 1 && cond(rtwo, modtwo) != 1 && cond(rthree, modthree) != 1))
    {
        printf("ERROR! Sistema sem resolucao nos Inteiros");
    }
    
    else if ((mdc(modone, modtwo) == 1 && mdc(modtwo, modthree) == 1 && mdc(modthree, modone) == 1) && (cond(rone, modone) == 1 && cond(rtwo, modtwo) == 1 && cond(rthree, modthree) == 1))
    {
        printf("O resultado 'x' do sistema : %d", calcongruente(modone, modtwo, modthree, rone, rtwo, rthree));
        
    }
}


int main()
{
    congruencia();
    return 0;
}