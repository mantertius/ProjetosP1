#include <stdio.h>
#include <math.h>
void binario(int x)
{
    printf("[%d]",x%2);
    if (x/2 == 0)
    {
        printf("%d",x%2);
    }
    else
    {  
        printf("%d",x%2);
        binario (x/2);         
    }
    printf("{%d}",x%2);
      
}


int main ()
{
    int numero;
    scanf("%d", &numero);
    binario(numero);
    printf("\n");
    return 0;
}