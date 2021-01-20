#include <stdio.h>
#include <string.h>
#define MAX 1000000
int buraco[MAX];
//descobrir quando começa, guardar esse numero, ver quando aparece dnv
// o primeiro toca acaba quando buraco[i] == 0 (armazenar i em t)
//o segundo toca começa quando buraco[t+1] → toca2 começa em t+1(armazenar i+1);
//o segunda toca acaba quando buraco[i]
// o terceiro toca acaba quando buraco[]
int avaliga(int N)
{
    int searching = 0;
    int tocas = 0;
    for (int i = 0; i < N; i++)
    {
        if (searching == 0)
        {
            if(buraco[i] == searching)
            {
                tocas = ++tocas;
                searching = buraco[i+1];
                //printf("i = %d\t tocas= %d\n",i,tocas);
            }
        }
        else
        {
            if(i == searching)
            {
                tocas = ++tocas;
                searching = buraco[i+1];
                //printf("i = %d\t tocas= %d\n",i,tocas);

            }
        }
        
    }
    return tocas;
}

int main()
{   
    int N;
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        int n;
        scanf("%d",&n);
        buraco[i] = n;
    }
    
    int x = avaliga(N);
    printf("%d\n",x);
    return 0;
}