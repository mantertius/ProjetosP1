#include <stdio.h>
#include <string.h>
/*
A cada termo são apresentados no dividendo o fatorial dos números naturais não nulos. 
No divisor, a partir do segundo termo, temos o menor número primo que seja maior ou igual ao dividendo.

IN: Um número n que indica quantos termos devem ser calculados.
OUT: Os termos da série e o resultado da soma com duas casas decimais de aproximação.
*/
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
long int fatorial (int x) //retorna o fatorial de um numero x
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
int proximo_primo(int x, int y) //descobre o proximo primo
{
    if (eh_primo(x,x-1) == 1 )
    {
        //printf("okoko pp_1\n ");
        return x;
    }
    if (eh_primo(y,y-1) == 1)
    {
       // printf("okoko pp_2\n ");
        return y;
    }
    else
    {
       // printf("okoko pp_3\n ");
        return proximo_primo(x,y+1);
    }
}
void serie(int n, int increment, long double result) //recebe o numero de termos, cria o array,
{
    //printf("okoko s_1\n ");
    if(increment == n)
    {
        //printf("okoko s_2\n ");
        int priminho = proximo_primo(increment,increment+1);
        long int fatorinho = fatorial(increment);
        
        printf("%d!/%d", increment, priminho);
        
        long double elemento = ((long double)fatorinho/(long double)priminho); //valor do elemento N!/proximoprimo(n)
        long double resultado = (long double)elemento + (long double)result;

        printf("\n%.2Lf\n", resultado);
        return;
    }
    else
    {
        int priminho = proximo_primo(increment,increment+1);
        long int fatorinho = fatorial(increment);
        
        printf("%d!/%d + ", increment, priminho);
        //printf("okoko s_3.2\n ");
        
        long double elemento = ((long double)fatorinho/(long double)priminho); //valor do elemento N!/proximoprimo(n)
        long double resultado = (long double)elemento + (long double)result;
        
        serie(n,increment+1,resultado);
    }
    
    
}
int main()
{
    int num;
    scanf("%d",&num);

    if(num <= 0)
    {
        printf("0.00\n");
        return 0;
    }
    if(num == 1)
    {
        printf("1!/1\n1.00\n");
        return 0;
    }
    else
    {
        printf("1!/1 + ");
        serie(num,2,1);
        return 0;
    }
    
}