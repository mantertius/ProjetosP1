//https://thehuxley.com/problem/574?quizId=5563
/* 

A taxa de importação para eletrônicos é de 60%;
O calculo do ICMS é dado pela formula: (Valor Final do produto x Aliquota)
O valor final do produto é dado pela soma do (Valor do Produto + Frete + Impostos de Importação) / (1 - Aliquota)
A empresa tem a cultura de não adicionar o frete no calculo, para valores de US$ 2,500 em diante. Informe isso ao fim da nota.


Sua entrada deve conter
-Cotação do Dolar
-Aliquota(%) do ICMS
-Valor do produto
-Valor do frete	


Sua saída deve conter:
-Taxa de conversão monetária (Cotação do dolar)
-Valor do produto (em reais)
-Valor do frete (em reais)
-Valor total (Valor do frete + Valor do produto)
-Valor de impostos de importação
-Valor de icms
-Total de Impostos (Importação + ICMS)
-Total a pagar
-Dizer se o total foi ou não isento do frete no calculo
*/
#include <stdio.h>

int main()
{
    double frete, produto, aliquota, dolar; //usd
    scanf("%lf", &dolar);
    scanf("%lf", &aliquota);
    scanf("%lf", &produto);
    scanf("%lf", &frete);

    printf("%.2lf\n", dolar);
    double prod_brl,fret_brl;

    prod_brl=produto*dolar;
    fret_brl=frete*dolar;

    printf("%.2lf\n",produto*dolar);
    printf("%.2lf\n",frete*dolar);
    if(produto<2500)
    {

        double v_total = prod_brl+fret_brl;
        double v_import =0.6*v_total; 
        double v_final = (v_total+v_import)/(1-(aliquota)/100);
        double icms = aliquota*v_final/100;

        double impostos = icms + v_import;
        printf("%.2lf\n",v_total);
        printf("%.2lf\n",v_import);
        printf("%.2lf\n",icms);
        printf("%.2lf\n",impostos);
        printf("%.2lf\n",v_final);
        printf("Impostos calculados com o frete\n");
        return 0;
    }
    else
    {
        
        double v_total = prod_brl+fret_brl;
        double v_import =0.6*prod_brl; 
        double v_import_2=0.6*v_total;
        double v_final2 = (v_total+v_import-fret_brl)/(1-(aliquota)/100);
        double v_final = ((prod_brl+v_import)/(1-(aliquota)/100))+fret_brl;
        double icms = aliquota*v_final2/100;

        double impostos = icms + v_import;
        
        printf("%.2lf\n",v_total);
        printf("%.2lf\n",v_import);
        printf("%.2lf\n",icms);
        printf("%.2lf\n",impostos);
        printf("%.2lf\n",v_final);
        printf("Impostos calculados sem o frete\n");
        return 0;
    }
    return 0;
      
}

