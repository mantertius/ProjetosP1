#include <stdio.h>
#include <string.h>

void array_scan(int a[],int indice,int tamanho)
{
    if (indice == tamanho)
    {
        return;
    }
    
    scanf("%d", &a[indice]);
     
    array_scan(a,indice+1,tamanho);
}
void array_greatest(int a[], int indice, int tamanho, int maior,int indice_maior) //imprime o valor maior do array, com seu indice
{
    if(indice == tamanho)
    {
        return;
    }
    if(a[indice] > a[indice_maior])
    {
        maior = a[indice];
        indice_maior = indice;
    }
    printf("[%d] MAIOR:%d, INDICE DO MAIOR:%d\n",indice, maior,indice_maior);
    array_greatest(a,indice+1,tamanho,maior,indice_maior);
}

int main()
{
    int array[10];
    array_scan(array,0,10);
    array_greatest(array,0,10,-1,0);
    
}