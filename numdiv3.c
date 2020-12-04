//https://thehuxley.com/problem/342?quizId=5562
#include <stdio.h>
static int numero_divisores = 0;
void div_3 (int y)
{
    if (y%3 == 0)
    {
       numero_divisores = numero_divisores + 1;
       //printf("[%d]", numero_divisores);
    }
}
void encontradivisores(int x, int y)
{
    int z = y;
    if (y <= 2)
    {
        return;  
    }
    else if (x%y == 0)
    {
        div_3(z);
        encontradivisores(x,y-1);
    }
    else if (x%y != 0)
    {
        encontradivisores(x,y-1);
    }
}
int main()
{
    int numero = 2;
    //printf("%d,",numero);
    scanf("%d",&numero);
    //printf("%d:\n",numero);
    if (numero <= 2)
    {
        printf ("O numero nao possui divisores multiplos de 3!\n");
    }
    else
    {
        encontradivisores(numero,numero);
        if(numero_divisores == 0)
        {
            printf ("O numero nao possui divisores multiplos de 3!\n");
        }
        else
        {
            printf("%d\n",numero_divisores);
        }
    }
    return 0;
}