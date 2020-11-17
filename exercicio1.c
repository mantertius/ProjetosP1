#include <stdio.h>

    int main()
    {
        int x, y, somar, subtrair, multiplicar, resto, dividir;
        
        
        printf("Digite o primeiro inteiro:\n");
            scanf ("%d", &x);
        printf("Digite o segundo inteiro:\n");
            scanf ("%d", &y);somar = x + y;
        
        
        
        subtrair = x - y;
        multiplicar = x*y;
        resto = x%y;
        dividir = x/y;
        
       
        printf("A soma é: [%d],\na subtração é:[%d],\na multiplicação é:[%d],\no resto é:[%d],\na divisao é:[%d].\n\n", somar, subtrair, multiplicar, resto, dividir);
        return 0;
    }