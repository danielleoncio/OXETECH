#include <stdio.h>

int mdc(int x, int y)
{
    if (x % y == 0)
    {
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

int main(){
   double a, m;

   scanf("%lf %lf", &a, &m);

   printf("%d", inverso(a,m, 0));

 return 0;
}