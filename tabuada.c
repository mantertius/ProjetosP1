#include <stdio.h>

int multiply(int x, int y)
{ 
    return x*y;
}
int main ()
{
    int num, var;
    scanf("%d",&num);
    
    for (var = 1; var <=9; var++)
    {
        printf("%d X %d = %d\n", num, var, multiply(num,var));
    }

    return 0;
}
//for(valor_inicial; condição_final; valor_incremento)
// {
//    instruções;
// }