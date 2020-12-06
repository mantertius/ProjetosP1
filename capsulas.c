#include <stdio.h>
#include <string.h>

#define PEQUENO 10
#define GRANDE 16
static char cafe[8] = {0};
static int capsulas = 0;
int counter(int x)
{   
    printf("----------- RODADA %d-------------\n", x);
    printf("BEGIN: capsulas...%d\n",capsulas);
    if (x > 7)
    {
        return capsulas;
    }
    int n_caixas;
    char tipo_caixa;
    scanf("%d",&n_caixas);
    getchar();
    scanf(" %c",&tipo_caixa);
    cafe[x] = tipo_caixa;

    if (tipo_caixa == 'G' || tipo_caixa == 'g')
    {
        capsulas = capsulas + (n_caixas*GRANDE);
        printf("%d %d\n",capsulas, n_caixas);
    }
    else
    {
        capsulas = capsulas + (n_caixas*PEQUENO);
        printf("%d %d\n",capsulas, n_caixas);
    }
    //printf("----------- RODADA %d-------------\n", x);
    printf("INPUT: n_caixas = {%d}, tipo_caixa = {%c}\n",n_caixas,tipo_caixa);
    printf("STORAGE: x = [%d],      cafe[%d] =   [%s]\n",x,x,&cafe[x]);
    printf("END: n capsulas...%d\n\n",capsulas);
    counter(x+1);
}

int main()
{
    printf("Numero de cápsulas: %d\n",counter(1));
    return 0;
}