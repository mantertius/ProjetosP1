//huxley 1532
#include <stdio.h>
/*
Álcool:
    até 20 litros, desconto de 3% por litro
    acima de 20 litros, desconto de 5% por litro
Gasolina:
    até 20 litros, desconto de 4% por litro
    acima de 20 litros, desconto de 6% por litro
Diesel:
    até 25 litros, não existe desconto
    acima de 25 litros, desconto de 4% por litro

    litro da gasolina é R$ 2,50, o preço do litro do álcool é R$ 1,90 e o preço do litro de Diesel é R$ 1,66
*/
int main()
{
    double qtd;
    char tipo;
    scanf("%lf", &qtd);
    getchar();
    scanf("%c", &tipo);

    if (tipo == 'A')
    {
        if (qtd <= 20)
        {
            double desconto = 0.03;
            double price = 1.90;
            double fin_pri = ((1-desconto)*(price))*(qtd);
            printf("R$ %.2lf\n", fin_pri);
        }
        else if(qtd > 20)
        {
            double desconto = 0.05;
            double price = 1.90;
            double fin_pri = ((1-desconto)*(price))*(qtd);
            printf("R$ %.2lf\n", fin_pri);
        } 
    }
    else if (tipo == 'G' )
    {
        if (qtd <= 20)
        {
            double desconto = 0.04;
            double price = 2.50;
            double fin_pri = ((1-desconto)*(price))*(qtd);
            printf("R$ %.2lf\n", fin_pri);
        }
        else if (qtd > 20)
        {
            double desconto = 0.06;
            double price = 2.50;
            double fin_pri = ((1-desconto)*(price))*(qtd);
            printf("R$ %.2lf\n", fin_pri);
        } 
    }
    else if (tipo == 'D' )
    {
        if (qtd > 25)
        {
            double desconto = 0.04;
            double price = 1.66;
            double fin_pri = ((1-desconto)*(price))*(qtd);
            printf("R$ %.2lf\n", fin_pri);
        }
        else
        {
            double price = 1.66;
            double fin_pri = price*qtd;
            printf("R$ %.2lf\n", fin_pri);
        }
         
    }

    return 0;
}