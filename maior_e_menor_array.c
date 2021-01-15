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
int array_greatest(int a[], int indice, int tamanho, int maior,int indice_maior) //imprime o valor maior do array, com seu indice
{
    if(indice == tamanho)
    {
        return maior;
    }
    if(a[indice] > a[indice_maior])
    {
        maior = a[indice];
        indice_maior = indice;
    }
    //printf("[%d] MAIOR:%d, INDICE DO MAIOR:%d\n",indice, maior,indice_maior);
    array_greatest(a,indice+1,tamanho,maior,indice_maior);
}

int array_lowest(int a[], int indice, int tamanho, int menor,int indice_menor) //imprime o valor menor do array, com seu indice
{
    if(indice == tamanho)
    {
        return menor;
    }
    if(a[indice] < a[indice_menor])
    {
        menor = a[indice];
        indice_menor = indice;
    }
    printf("[%d] MENOR:%d, INDICE DO MENOR:%d\n",indice, menor,indice_menor);
    array_lowest(a,indice+1,tamanho,menor,indice_menor);
}
int main()
{
    int array[6];
    array_scan(array,0,6);
    int maior = array_greatest(array,0,6,array[0],0);
    int menor = array_lowest(array,0,6,array[0],0);
    printf("%d\n", menor);
    printf("%d\n", maior);
    return 0;
    
}