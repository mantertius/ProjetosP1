#include <stdio.h>
#include <string.h>

int array1[];
int array2[];

void swap_element(int x, int y) //swap com y>x; y,x → x,y
{
    int aux;
    aux = y;
    y = x;
    x = aux;
    return;
}

void bubble(int a[], int indice, int tamanho, int count, int tamanho_inicial) //vai retornar o maior array2[],
{
    int aux;
    if (tamanho == 0)
    {
        bubble(a,indice+1,tamanho_inicial, count+1, tamanho_inicial);
    }
    if (count == tamanho_inicial)
    {
        return;
    }
    if (array1[indice]>array1[indice+1])//faz o swap pra frente
    {
        swap_element(array1[indice],array1[indice+1]);
        
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    else
    {
        bubble(a,indice+1,tamanho-1, count, tamanho_inicial);
    }
    
}