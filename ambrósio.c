// huxley 5560
#include <stdio.h>
float desconto(float x)
{
    return x*(0.85);
}
int main()
{
    int codigo, quantidade;
    scanf("%d%d",&codigo, &quantidade);

    
    if (codigo == 1)
    {
        float preco = 5.30;
        float fpreco = preco*quantidade;
        if ((fpreco >= 40) || (quantidade >= 15))
        {
            printf("R$ %.2f\n", desconto(fpreco));
        }
        else
        {
            printf("R$ %.2f\n", fpreco);
        } 
    }
    else if (codigo == 2)
    {
        float preco = 6.0;
        float fpreco = preco*quantidade;
        if ((fpreco >= 40) || (quantidade >= 15))
        {
            printf("R$ %.2f\n", desconto(fpreco));
        }
        else
        {
            printf("R$ %.2f\n", fpreco);
        } 
    }
    else if (codigo == 3)
    {
        float preco = 3.20;
        float fpreco = (preco*quantidade);
        if ((fpreco >= 40) || (quantidade >= 15))
        {
            printf("R$ %.2f\n", desconto(fpreco));
        }
        else
        {
            printf("R$ %.2f\n", fpreco);
        } 
    }
    else if (codigo == 4)
    {
        float preco = 2.50;
        float fpreco = (preco*quantidade);
        if ((fpreco >= 40) || (quantidade >= 15))
        {
            printf("R$ %.2f\n", desconto(fpreco));
        }
        else
        {
            printf("R$ %.2f\n", fpreco);
        } 
    }
    return 0;

}