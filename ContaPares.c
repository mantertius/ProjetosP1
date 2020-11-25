#include <stdio.h>
#include <math.h>
int ContaDigitosPares(int x)
{   
    static int npares = 0; 
    int r = x%2;
    if (x/10 == 0) // pra finalizar o programa
    {   
        if (r == 0)
        {
            npares ++;
            return npares;
        }
        else
        {
            return npares;
        }
    }
    
    else //pra chamar a função recursiva
    {
        if (r == 0)
        {
            npares ++;
            ContaDigitosPares(x/10);
        }
        else
        {
        ContaDigitosPares(x/10);
        }
    }
    return npares;
}
int main()
{   
    int num;
    scanf("%d",&num);
    printf("%d\n",ContaDigitosPares(num));
    return 0;
}