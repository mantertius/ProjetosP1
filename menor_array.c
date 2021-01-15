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
    printf("[%d] MAIOR:%d, INDICE DO MAIOR:%d\n",indice, menor,indice_menor);
    array_lowest(a,indice+1,tamanho,menor,indice_menor);
}

int main()
{
    int array[10];
    array_scan(array,0,10);
    int menor = array_lowest(array,0,10,0,0);
    printf("%d\n", menor);
    
}