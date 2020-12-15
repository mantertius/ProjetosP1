//https://thehuxley.com/problem/972
#include <stdio.h>
#include <math.h>
 
int verificaPRIMO(int x, int y) //verifica se um numero x é primo, y=x-1
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
        return verificaPRIMO(x,y-1);
    }
    
}
void scan()
{
    int x;
    scanf("%d",&x);
    if (x == 0 || x == 1)
    {
        printf("%d\n", 0);
        scan();
    }
    else if (x <= -1)
    {
        return;
    }
    else
    {
        printf("%d\n",verificaPRIMO(x,x-1));
        scan();
    }
}
 
int main ()
{
    int numero_base;
    scanf("%d",&numero_base);
    if (numero_base == 0 || numero_base == 1)
    {
        printf("%d\n",0);
        scan();
    }
    else if (numero_base <= -1) //finalizar o programa se input == -1
    {
        return 0;
    }
    else
    {
        printf("%d\n",verificaPRIMO(numero_base,numero_base-1));
        scan();
    }
} 
 