#include <stdio.h>
#include <string.h>

#define PEQUENO 10
#define GRANDE 16
#define xicarasporcapsula 2
#define professores 7


static char cafe[5];
static int capsulas = 0;
static int xicaras = 0;
int counter(int x)
{   
    
    if (x > 7)
    {
        return capsulas;
    }
    //printf("----------- RODADA %d-------------\n", x);
    //printf("BEGIN: capsulas...%d\n",capsulas);
    int n_caixas;
    char tipo_caixa;
    scanf("%d",&n_caixas);
    getchar();
    scanf(" %c",&tipo_caixa);
    cafe[x] = tipo_caixa;

    if (tipo_caixa == 'G' || tipo_caixa == 'g')
    {
        capsulas = capsulas + (n_caixas*GRANDE);
        
       //printf("%d %d\n",capsulas, n_caixas);
    }
    else
    {
        capsulas = capsulas + (n_caixas*PEQUENO);
        //printf("%d %d\n",capsulas, n_caixas);
    }
    //printf("----------- RODADA %d-------------\n", x);
    xicaras = xicarasporcapsula*capsulas/professores;
   // printf("INPUT: n_caixas = {%d}, tipo_caixa = {%c}\n",n_caixas,tipo_caixa);
   // printf("STORAGE: x = [%d],      cafe[%d] =   [%s]\n",x,x,&cafe[x]);
  //  printf("END: n capsulas...%d\n\n",capsulas);
    counter(x+1);
}

int main()
{
    //printf("Numero de cápsulas: %d\n",counter(1));
    //printf("Numero de Xícaras: %d\n",xicaras);
    printf("%d\n",counter(1));
    printf("%d\n",xicaras);
    return 0;
}

//DE ALGUMA FORMA O ARRAY CAFE[] TEM BUGADO.
/*----------- RODADA 7-------------
BEGIN: capsulas...88
INPUT: n_caixas = {1}, tipo_caixa = {P}
STORAGE: x = [7],      cafe[7] =   [Pb]
END: n capsulas...98
*/