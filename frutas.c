#include <stdio.h>
#include <string.h>
/*
3
9.85
Mamao Maca Melao
2.65
Melancia
9.54
Pera Uva Goiaba
*/

void scan_valor(int i, double valor[])
{
    double n;
    scanf("%lf",&n);
    valor[i] = n;
    //printf("[%lf]:",valor[i]);
}

int scan_nome(int i, char nome[])//retorna o numero de frutas
{
    int spaces = 0;
    int palavra = scanf(" %[^\n]s",nome);
    int tamanho = strlen(nome);
    for (int k = 0; k < tamanho ; k++)
    {
        if(nome[k] == ' ' && k < tamanho-1)
        {
            spaces = spaces+1;
        }
        //printf("%c",nome[k]);
    }
    //printf(" Spaces = [%d]\n",spaces);
    return spaces;
}

double media_rs(int i, int n_frutas, double valor[])
{
    double media = valor[i]/n_frutas;
    return media;
    
}

int main()
{
    int dias;
    scanf("%d",&dias);

    double valor[dias];
    char nome[1000001];
    int total_frutas = 0;
    double t = 0;
    for (int i = 0; i < dias; i++)
    {
        scan_valor(i, valor);
        int n_frutas = scan_nome(i, nome) + 1;
        printf("dia %d: %d kg\n", i+1, n_frutas);
        total_frutas = n_frutas + total_frutas;
    }

    for (int i = 0; i < dias; i++)
    {
        t = valor[i] + t;
    }
     
    double mean_rs = t/dias;
    double mean_kg = (double)total_frutas/(double)dias;
    printf("%.2lf kg por dia\n",mean_kg);
    printf("R$ %.2lf por dia\n",mean_rs);
    



    return 0;
}
