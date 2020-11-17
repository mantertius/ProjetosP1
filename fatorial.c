#include <stdio.h>
int fatorial (int x)
{
    int result;
    if (x == 0)
    {
        result = 1;
    }
    else
    {
        result = x*fatorial(x-1);
    }
    return result;
}
int main ()
{
    int numero;
    int resultado;
    scanf("%d", &numero);
    resultado = fatorial(numero);
    printf("%d! = %d\n", numero, resultado);

    return 0; 
}
