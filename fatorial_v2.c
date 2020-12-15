#include <stdio.h>

int fatorial (int x) //retorna o fatorial de um numero x
{    
    int resultado;
    if (x==0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x*fatorial(x-1); //toda vez que a função fatorial é executada, resultado é atualizada c
    }
    return resultado;
}
void scan() //vai scanear os números até que 
{
    int x;
    scanf("%d",&x);
    if (x <= -1) 
    {
        return;
    }
    printf("%d\n",fatorial(x));
    scan();
} 
int main()
{   
    int numero_base;
    scanf("%d", &numero_base);
    if (numero_base == -1)
    {
        return 0;
    }
    else
    {
        printf("%d\n",fatorial(numero_base));
        scan();
    }
    return 0;
}