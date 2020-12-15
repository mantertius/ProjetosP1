#include <stdio.h>
int eh_primo(int x, int y) //verifica se um numero x é primo, y = x-1
{
    if (x%y == 0 && y==1)
    {
        return 1;
    }
    else if (x%y == 0 && y != 1)
    {
        return 0;
    }
    else
    {
        return eh_primo(x,y-1);
    }
    
}
int proximo_primo(int x, int y) //descobre o proximo primo
{
    if (eh_primo(x,x-1) == 1 )
    {
        printf("okoko pp_1 [%d]\n",x);
        return x;
    }
    if (eh_primo(y,y-1) == 1)
    {
        printf("okoko pp_2 [%d]\n",y);
        return y;
    }
    else
    {
        printf("okoko pp_3\n ");
        return proximo_primo(x,y+1);
    }
}
int main ()
{
    double x1;
    scanf("%lf",&x1);
    int x2;
    x2 = x1;
    //printf("%d\n", x2);
    if(x1 == 1)
    {
        printf("ali");
        printf("1!/1\n1.00");
        return 0;
    }
    proximo_primo(x1,x1+1);
    return 0;
}