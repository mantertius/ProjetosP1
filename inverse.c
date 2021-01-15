#include <stdio.h>
#include <string.h>

#define MAX 100001


void array_scan(int a[],int indice,int tamanho)
{
    if (indice == tamanho)
    {
        return;
    }
    
    scanf("%d", &a[indice]);
     
    array_scan(a,indice+1,tamanho);
}
void inversador(int array1[], int array2[], int tamanho, int passo)
{   
    int aux = array1[tamanho];
    array2[passo] = aux;

    if (tamanho == -1)
    {
        return;
    }
    else
    {
        return inversador(array1,array2,tamanho-1,passo+1);
    }
}
void print_array(int array[], int tamanho, int passo)
{
    if (passo == tamanho-1)
    {
        printf("%d\n", array[passo]);
        return;
    }
    else
    {
        printf("%d ", array[passo]);
        return print_array(array,tamanho,passo+1);
    }
}

int main()
{
    int tamanho_array;
    scanf("%d",&tamanho_array);
    int array1[tamanho_array];
    int array2[tamanho_array];
    array_scan(array1,0,tamanho_array);
    inversador(array1,array2,tamanho_array-1,0);
    print_array(array2,tamanho_array,0);
    
    return 0;
    
}