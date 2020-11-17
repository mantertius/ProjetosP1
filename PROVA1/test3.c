#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int distancia, reais, litros, postos, gas_price;
    scanf("%d%d%d%d%d",&distancia , &reais, &litros, &postos, &gas_price);
    int consumo = 10; //km/l
    int rest;
    int gas_needs = distancia/(consumo); //necessário de litros
    int gasolina_faltando = gas_needs-litros;
    float tanques = (float)gas_needs/(float)litros; //numero de tanques
//    printf ("%f\n",tanques);
    if (tanques <= 1)
    {
        rest = reais;
        printf("Pode viajar==.\nR$: %d\n",rest);
    }
    else if(tanques > (postos+1))
    {
        printf("Nao pode viajar.\n");
    }
    else if ((reais) - (gasolina_faltando*gas_price) < 0)
    {
        printf("Nao pode viajar.\n");
    }
    else if (tanques <= (postos+1))
    {
        int abastecimento = gas_price*(gasolina_faltando); //gasto em reais
        rest = reais - abastecimento;
        printf("Pode viajar.\nR$: %d\n",rest);
    }
	return 0;
}