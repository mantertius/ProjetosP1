//https://thehuxley.com/problem/1290
#include <stdio.h>

static int count = 0;
static int n,t;
int contador()
{
    if (count == (t-1))
    {
        return 1;
    }
    else
    {
        count++;
        return 0;
    }
}
int soma3 (int x)
{
    int resultado = (x + 3);
    return resultado;
}
int divide5 (int x)
{
    int resultado = (x + (x%5));
    return resultado;
}
int escolhedor(int numero) //recebe n //recebe (n+3)
{
    int result; //cria o inteiro result //reseta o result
    
    if (count%2 == 0) //se contagem for par ou menor que 0
    {
        result = soma3(numero); //define result como sendo n+3
        if (contador() == 1) //se contador é igual a T
        {
            return result;  //retorna o ultimo valor, nesse caso soma3(numero)
        }
        else
        {
            return escolhedor(result); //joga este valor em escolhedor novamente
        }
    }
    else if(count%2 != 0)
    {
        result = divide5(numero);
        if (contador() == 1)
        {
            return result;  
        }
        else
        {
        return escolhedor(result);
        }
    } 
    
    return result;
}

int main()
{
    scanf("%d%d",&n,&t); //escaneia os valores de n e t 
    if (t <= 0 && n < 0)
    {
        printf("%d\n", n);
    }
    else if( n < 0 && t > 0)
    {
        int resultado_final = escolhedor(n); // começa a recursão com n
        printf("%d\n", resultado_final);
    }
    else if (t == 0)
    {
        printf ("%d\n",n);
    }
    else 
    {
        int resultado_final = escolhedor(n); // começa a recursão com n
        printf("%d\n", resultado_final); 
    }
    return 0;
}

//finalizado
